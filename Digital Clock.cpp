//#include <iostream>
//#include <ctime>
//
//void printDigitalClock()
//{
//    // Aktuelle Zeit abrufen
//    std::time_t currentTime = std::time(nullptr);
//    std::tm* localTime = std::localtime(&currentTime);
//
//    // Uhrzeitkomponenten extrahieren
//    int hours = localTime->tm_hour;
//    int minutes = localTime->tm_min;
//    int seconds = localTime->tm_sec;
//
//    // ASCII-Art für die digitale Uhr
//    const char* clock[10] = {
//        "       #####  \n"
//        "     ##     ##\n"
//        "   ##         \n"
//        "   ##    #####\n"
//        "   ##       ##\n"
//        "     ##     ##\n"
//        "       #####  \n",
//
//        "        ###   \n"
//        "       ## ##  \n"
//        "      ##   ## \n"
//        "          ##  \n"
//        "          ##  \n"
//        "          ##  \n"
//        "        ######\n",
//
//        "      #####   \n"
//        "     ##   ##  \n"
//        "          ##  \n"
//        "        ###   \n"
//        "          ##  \n"
//        "     ##   ##  \n"
//        "      #####   \n",
//
//        "      #####   \n"
//        "     ##   ##  \n"
//        "          ##  \n"
//        "       ####   \n"
//        "          ##  \n"
//        "     ##   ##  \n"
//        "      #####   \n",
//
//        "     ##       \n"
//        "    ##        \n"
//        "   ##         \n"
//        "  ##   ###### \n"
//        " ########### \n"
//        "         ##  \n"
//        "         ##  \n",
//
//        "    #######   \n"
//        "    ##        \n"
//        "    ##        \n"
//        "    #####     \n"
//        "    ##        \n"
//        "    ##        \n"
//        "    #########\n",
//
//        "      #####   \n"
//        "     ##   ##  \n"
//        "    ##        \n"
//        "    ########  \n"
//        "    ##     ## \n"
//        "    ##     ## \n"
//        "      #####   \n",
//
//        "   ########   \n"
//        "   ##    ##   \n"
//        "         ##   \n"
//        "       ##     \n"
//        "     ##       \n"
//        "    ##        \n"
//        "   ##         \n",
//
//        "     #####    \n"
//        "    ##   ##   \n"
//        "   ##     ##  \n"
//        "    ##   ##   \n"
//        "     #####    \n"
//        "         ##   \n"
//        "          ##  \n",
//
//        "      #####   \n"
//        "     ##   ##  \n"
//        "    ##     ## \n"
//        "   ########## \n"
//        "          ##  \n"
//        "        ##    \n"
//        "      ##      \n"
//    };
//
//    // Uhrzeit anzeigen
//    std::cout << "  " << clock[hours / 10] << clock[hours % 10] << ":"
//        << clock[minutes / 10] << clock[minutes % 10] << ":"
//        << clock[seconds / 10] << clock[seconds % 10] << std::endl;
//}
