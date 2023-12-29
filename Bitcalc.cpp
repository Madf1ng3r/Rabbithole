#include <iostream>

double bitsToBytes(double bits) {
    return bits / 8.0;
}

double bytesToBits(double bytes) {
    return bytes * 8.0;
}

int bitmain() {
    char choice;

    std::cout << "Möchten Sie Bit zu Byte (b) oder Byte zu Bit (t) umrechnen? ";
    std::cin >> choice;

    if (choice == 'b' || choice == 'B') {
        double bits;
        std::cout << "Geben Sie die Anzahl der Bits ein: ";
        std::cin >> bits;
        std::cout << bits << " Bits entsprechen " << bitsToBytes(bits) << " Bytes." << std::endl;
    }
    else if (choice == 't' || choice == 'T') {
        double bytes;
        std::cout << "Geben Sie die Anzahl der Bytes ein: ";
        std::cin >> bytes;
        std::cout << bytes << " Bytes entsprechen " << bytesToBits(bytes) << " Bits." << std::endl;
    }
    else {
        std::cout << "Ungültige Auswahl." << std::endl;
    }

    return 0;
}
