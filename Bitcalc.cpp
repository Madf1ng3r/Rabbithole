#include <iostream>
using namespace std;

double bitsToBytes(double bits) {
    return bits / 8.0;
}

double bytesToBits(double bytes) {
    return bytes * 8.0;
}

int bitmain() {
    char choice;
    cout << "Möchten Sie Bit zu Byte (b) oder Byte zu Bit (t) umrechnen? ";
    cin >> choice;
    if (choice == 'b' || choice == 'B') {
        double bits;
        cout << "Geben Sie die Anzahl der Bits ein: ";
        cin >> bits;
        cout << bits << " Bits entsprechen " << bitsToBytes(bits) << " Bytes." << endl;
    }
    else if (choice == 't' || choice == 'T') {
        double bytes;
        cout << "Geben Sie die Anzahl der Bytes ein: ";
        cin >> bytes;
        cout << bytes << " Bytes entsprechen " << bytesToBits(bytes) << " Bits." << endl;
    }
    else {
        cout << "Ungültige Auswahl." << endl;
    }
    return 0;
}
