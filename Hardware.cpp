#include <Windows.h>
#include <iostream>
#include <comdef.h>
#include <Wbemidl.h>
#include <iostream>
using namespace std;
#pragma comment(lib, "wbemuuid.lib")
int hwmain()
{
    HRESULT hres;
    // Step 1: Initialize COM
    hres = CoInitializeEx(0, COINIT_MULTITHREADED);
    if (FAILED(hres))
    {
        wcerr << L"Failed to initialize COM library. Error code = 0x" << hex << hres << endl;
        return 1;
    }
    // Step 2: Set general COM security levels
    hres = CoInitializeSecurity(
        nullptr,
        -1,                          // Default authentication
        nullptr,                     // Default authentication services
        nullptr,                     // Reserved
        RPC_C_AUTHN_LEVEL_DEFAULT,   // Default authentication level for calls
        RPC_C_IMP_LEVEL_IMPERSONATE, // Default Impersonation level for calls
        nullptr,                     // Authentication info
        EOAC_NONE,                   // Additional capabilities
        nullptr                      // Reserved
    );
    if (FAILED(hres))
    {
        wcerr << L"Failed to initialize security. Error code = 0x" << hex << hres << endl;
        CoUninitialize();
        return 1; // Program has failed.
    }
    // Step 3: Obtain the initial locator to Windows Management
    // on the local machine.
    IWbemLocator* pLoc = nullptr;
    hres = CoCreateInstance(
        CLSID_WbemLocator,
        0,
        CLSCTX_INPROC_SERVER,
        IID_IWbemLocator,
        reinterpret_cast<LPVOID*>(&pLoc));
    if (FAILED(hres))
    {
        wcerr << L"Failed to create IWbemLocator object. Error code = 0x" << hex << hres << endl;
        CoUninitialize();
        return 1; // Program has failed.
    }
    // Convert const wchar_t* to BSTR for ConnectServer
    BSTR bstrPath = SysAllocString(L"ROOT\\CIMV2");
    if (!bstrPath)
    {
        wcerr << L"Failed to allocate BSTR for the path." << endl;
        pLoc->Release();
        CoUninitialize();
        return 1;
    }
    // Step 4: Connect to WMI through the IWbemLocator::ConnectServer method
    IWbemServices* pSvc = nullptr;
    hres = pLoc->ConnectServer(
        bstrPath,     // Use the BSTR for the path
        nullptr,
        nullptr,
        nullptr,
        0,
        nullptr,
        nullptr,
        &pSvc);
    SysFreeString(bstrPath); // Free the allocated BSTR
    if (FAILED(hres))
    {
        wcerr << L"Could not connect. Error code = 0x" << hex << hres << endl;
        pLoc->Release();
        CoUninitialize();
        return 1; // Program has failed.
    }
    wcout << L"Connected to ROOT\\CIMV2 WMI namespace" << endl;
    // Step 5: Set security levels on the proxy
    hres = CoSetProxyBlanket(
        pSvc,                       // Indicates the proxy to set
        RPC_C_AUTHN_WINNT,          // RPC_C_AUTHN_xxx
        RPC_C_AUTHZ_NONE,           // RPC_C_AUTHZ_xxx
        nullptr,                    // Server principal name
        RPC_C_AUTHN_LEVEL_CALL,     // RPC_C_AUTHN_LEVEL_xxx
        RPC_C_IMP_LEVEL_IMPERSONATE, // RPC_C_IMP_LEVEL_xxx
        nullptr,                    // client identity
        EOAC_NONE                   // proxy capabilities
    );
    if (FAILED(hres))
    {
        wcerr << L"Could not set proxy blanket. Error code = 0x" << hex << hres << endl;
        pSvc->Release();
        pLoc->Release();
        CoUninitialize();
        return 1; // Program has failed.
    }
    // Step 6: Use the IWbemServices pointer to make requests of WMI
    // For example, get the name of the CPU
    IEnumWbemClassObject* pEnumerator = nullptr;
    hres = pSvc->ExecQuery(
        BSTR(L"WQL"),
        BSTR(L"SELECT * FROM Win32_Processor"),
        WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY,
        nullptr,
        &pEnumerator);
    if (FAILED(hres))
    {
        wcerr << L"Query for operating system name failed. Error code = 0x" << hex << hres << endl;
        pSvc->Release();
        pLoc->Release();
        CoUninitialize();
        return 1; // Program has failed.
    }
    // Step 7: Retrieve the data from the query in step 6
    IWbemClassObject* pclsObj = nullptr;
    ULONG uReturn = 0;
    while (pEnumerator)
    {
        hres = pEnumerator->Next(WBEM_INFINITE, 1,
            &pclsObj, &uReturn);
        if (0 == uReturn)
        {
            break;
        }
        VARIANT vtProp;
        // Get the value of the Name property
        hres = pclsObj->Get(L"Name", 0, &vtProp, 0, 0);
        if (SUCCEEDED(hres))
        {
            wcout << L"CPU Name: " << vtProp.bstrVal << endl;
            R"(
      ____
     ||""||
     ||__||
     [ -=.]`)
     ====== 
)";
            VariantClear(&vtProp);
        }
        pclsObj->Release();
    }
    // Cleanup
    pSvc->Release();
    pLoc->Release();
    pEnumerator->Release();
    CoUninitialize();
    return 0; // Program successfully completed.
}
