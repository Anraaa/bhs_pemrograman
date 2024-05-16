#include <iostream>

using namespace std;

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

int main() {
    int menu, menu1, menu2, pesan, harga;

    while (true) {
        clearScreen();
        cout << "Menu Makanan" << endl;
        cout << "1. Makanan" << endl;
        cout << "2. Minuman" << endl;
        cout << "3. Exit" << endl;
        cout << "Masukkan Pilihan: ";
        cin >> menu;

        if (menu == 1) {
            while (true) {
                clearScreen();
                cout << "MAKANAN" << endl;
                cout << "1. Pecel Lele Rp. 15.000" << endl;
                cout << "2. Nasi Goreng Rp. 18.000" << endl;
                cout << "3. Kembali" << endl;
                cout << "Masukkan Pilihan: ";
                cin >> menu1;

                if (menu1 == 3) break;

                switch (menu1) {
                    case 1:
                        while (true) {
                            clearScreen();
                            cout << "Anda memilih Pecel Lele" << endl;
                            cout << "1. QTY" << endl;
                            cout << "2. Total" << endl;
                            cout << "Masukkan Pilihan: ";
                            cin >> menu2;

                            if (menu2 == 1) {
                                cout << "Masukkan Jumlah yang ingin dipesan (QTY): ";
                                cin >> pesan;
                            } else if (menu2 == 2) {
                                harga = 15000 * pesan;
                                cout << "Jumlah Harganya adalah " << harga << endl;
                                cout << "Tekan Enter untuk melanjutkan...";
                                cin.ignore().get();
                            } else {
                                cout << "Pilihan Tidak valid" << endl;
                            }
                        }
                        break;
                    case 2:
                        while (true) {
                            clearScreen();
                            cout << "Anda memilih Nasi Goreng" << endl;
                            cout << "1. QTY" << endl;
                            cout << "2. Total" << endl;
                            cout << "Masukkan Pilihan: ";
                            cin >> menu2;

                            if (menu2 == 3) break;

                            if (menu2 == 1) {
                                cout << "Masukkan Jumlah yang ingin dipesan (QTY): ";
                                cin >> pesan;
                            } else if (menu2 == 2) {
                                harga = 18000 * pesan;
                                cout << "Jumlah Harganya adalah " << harga << endl;
                                cout << "Tekan Enter untuk melanjutkan...";
                                cin.ignore().get();
                            } else {
                                cout << "Pilihan Tidak valid" << endl;
                            }
                        }
                        break;
                    default:
                        cout << "Pilihan Tidak valid" << endl;
                        break;
                }
            }
        } else if (menu == 2) {
            while (true) {
                clearScreen();
                cout << "MINUMAN" << endl;
                cout << "1. Teh Pucuk Rp. 5.000" << endl;
                cout << "2. Mizone Rp. 8.000" << endl;
                cout << "3. Kembali" << endl;
                cout << "Masukkan Pilihan: ";
                cin >> menu1;

                if (menu1 == 3) break;

                switch (menu1) {
                    case 1:
                        while (true) {
                            clearScreen();
                            cout << "Anda memilih Teh Pucuk" << endl;
                            cout << "1. QTY" << endl;
                            cout << "2. Total" << endl;
                            cout << "Masukkan Pilihan: ";
                            cin >> menu2;

                            if (menu2 == 3) break;

                            if (menu2 == 1) {
                                cout << "Masukkan Jumlah yang ingin dipesan (QTY): ";
                                cin >> pesan;
                            } else if (menu2 == 2) {
                                harga = 5000 * pesan;
                                cout << "Jumlah Harganya adalah " << harga << endl;
                                cout << "Tekan Enter untuk melanjutkan...";
                                cin.ignore().get();
                            } else {
                                cout << "Pilihan Tidak valid" << endl;
                            }
                        }
                        break;
                    case 2:
                        while (true) {
                            clearScreen();
                            cout << "Anda memilih Mizone" << endl;
                            cout << "1. QTY" << endl;
                            cout << "2. Total" << endl;
                            cout << "Masukkan Pilihan: ";
                            cin >> menu2;

                            if (menu2 == 1) {
                                cout << "Masukkan Jumlah yang ingin dipesan (QTY): ";
                                cin >> pesan;
                            } else if (menu2 == 2) {
                                harga = 8000 * pesan;
                                cout << "Jumlah Harganya adalah " << harga << endl;
                                cout << "Tekan Enter untuk melanjutkan...";
                                cin.ignore().get();
                            } else {
                                cout << "Pilihan Tidak valid" << endl;
                            }
                        }
                        break;
                    default:
                        cout << "Pilihan Tidak valid" << endl;
                        break;
                }
            }
        } else if (menu == 3) {
            break;
        } else {
            cout << "Pilihan Tidak valid" << endl;
        }
    }

    return 0;
}
