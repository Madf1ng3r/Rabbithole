#include "Hcode.h"
#include "Code.h"
#include "Zcode.h"
#include "Mainframe.h"
#include "Openlink.h"
#include "BeispielCode.h"
using namespace std;
void showLinux()
{
    cout << "\033[32m";
    cout << R"(                                                        
                                                                                                                                                                                                                           
                                                       
                                                         

       _nnnn_
        dGGGGMMb
       @p~qp~~qMb
       M|@||@) M|
       @,----.JM|
      JS^\__/  qKL            _________________________
     dZP        qKRb         |                         |
    dZP          qKKb        |        -  Linux         |
   fZP            SMMb       |        -  Bash          |
   HZM            MMMM       |''      -  Kommandos     |
   FqM            MMMM       | '                       |
 __| ".        |\dS"qML      | '                       |
 |    `.       | `' \Zq      |@________________________|
_)      \.___.,|     .'            <|         |>
\____   )MMMMMP|   .'       ---------------------------
     `-'       `--'      ~ |___________________________| ~                                                                                                
                         (__________________________________________________________________        
                        / #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  #  / __  
                       /  #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #  # / (  )  
                      /   #  #   #   #   #   #   #   #   #   #   #   #   #   #   #   #   /  (__)  
                     /__________________________________________________________________/    
###################################################################################
Server / Client / Netzwerk / Firewall / Benutzer / Gruppen / Verzeichnisse / Samba
###################################################################################
FTP / MySQL / Apache2 / ./Skripts / tar / Routing / Ports / Subnets / DHCP / DNS /
###################################################################################
SSH / /ETC / Nextcloud / ifconfig / Ping / Sudo / 007 / Yaml / Parted / Tree / ls /
###################################################################################
find / grep | && || . [] () \ $var / chown / chmod / chgrp / systemctl / restart /
###################################################################################
daemon / kill / disable / enable / install / mv / cat >> / history / group / apt /
###################################################################################
netplan / .conf / addgroup / adduser / lsblk / sdb1 / mount / fstab / rmdir / apply
###################################################################################
pdbedit / -a -L / shutdown / restart / touch / nano / gnu / fortune / netstat / rm
###################################################################################
cd / /var/www/html / /etc / /home ~ / @ root / ip addr / ssh keygen / ufw status /
###################################################################################
update-grup / hosts / ethernets / index.html / https / default-ssl / cifs / uid /
###################################################################################
mkfs.ext4 / mklabel gpt / eth0 / mkdir / a2enmod / a2ensite / rmdir-R / exit / quit 
###################################################################################
0 - Zurueck          
 )";  cout << "\033[0m";
}
int linuxmain()
{
    bool running = true;
    int choice;
    while (running)
    {
        showLinux();
        cout << "Wählen Sie eine Option: ";
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Nicht korrekte Eingabe. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            continue;
        }
        switch (choice)
        {
        case 1:
            animateTransition();
            clearScreen();
            break;
        case 2:
            
            break;
        case 0:
            running = false;
            break;
        default:
            cout << "Ungültige Auswahl. Bitte versuchen Sie es erneut." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            break;
        }
    }
    return 0;
}