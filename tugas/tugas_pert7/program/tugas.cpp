#include <iostream>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

int main(){
    int menu, menu1, menu2, menu3, menu4, pesan, harga;
    
    main:
    clearScreen();
    cout << "Menu Makanan" << endl;
    cout << "1. Makanan" << endl;
    cout << "2. Minuman" << endl;
    cout << "3. Exit" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> menu;

    switch(menu){
        case 1:
            sub_menu:
            clearScreen();
            cout << "MAKANAN" << endl;
            cout << "1. Pecel Lele Rp. 15.000" << endl;
            cout << "2. Nasi Goreng Rp. 18.000" << endl;
            cout << "3. Kembali" << endl;
            cout << "Masukkan Pilihan: ";
            cin >> menu1;

            switch (menu1){
                case 1:
                    clearScreen();
                    sub_menu1 :
                    cout << "Anda memilih Pecel Lele " << endl;;
                    cout << "1. QTY " << endl;
                    cout << "2. Total " << endl;
                    cout << "Masukkan Pilihan: ";
                    cin >> menu2;

                    if (menu2 == 1){
                        cout << "Masukan Jumlah yang ingin dipesan (QTY) : " ;
                        cin >> pesan;
                        goto sub_menu1;
                    } else if (menu2 == 2){
                        harga = 15000 * pesan;
                        cout << "Jumlah Harganya adalah " << harga ;
                        goto sub_menu1;
                    }
                    break;
                case 2:
                    clearScreen();
                    sub_menu1_a:
                    cout << "Anda memilih Nasi Goreng" << endl;;
                    cout << "1. QTY " << endl;
                    cout << "2. Total " << endl;
                    cout << "Masukkan Pilihan: ";
                    cin >> menu2;

                    if (menu2 == 1){
                        cout << "Masukan Jumlah yang ingin dipesan (QTY) : " ;
                        cin >> pesan;
                        goto sub_menu1;
                    } else if (menu2 == 2){
                        harga = 18000 * pesan;
                        cout << "Jumlah Harganya adalah " << harga ;
                        goto sub_menu1_a;
                    } else {
                        cout << "Pilihan Tidak valid";
                        goto sub_menu1_a;
                    }
                    break;
                case 3:
                    goto sub_menu1_a;
                    break;
            }
            break;
        case 2:
            sub_menu2:
            clearScreen();
            cout << "MINUMAN" << endl;
            cout << "1. Teh Pucuk Rp. 5.000" << endl;
            cout << "2. Mizone Rp. 8.000" << endl;
            cout << "3. Kembali" << endl;
            cout << "Masukkan Pilihan: ";
            cin >> menu3;

            switch (menu3){
                case 1:
                    clearScreen();
                    sub_menu2_a:
                    cout << "Anda memilih Teh Pucuk " << endl;;
                    cout << "1. QTY " << endl;
                    cout << "2. Total " << endl;
                    cout << "Masukkan Pilihan: ";
                    cin >> menu4;

                    if (menu4 == 1){
                        cout << "Masukan Jumlah yang ingin dipesan (QTY) : " ;
                        cin >> pesan;
                        goto sub_menu2_a;
                    } else if (menu4 == 2){
                        harga = 5000 * pesan;
                        cout << "Jumlah Harganya adalah " << harga ;
                        goto sub_menu2_a;
                    }
                    break;
                case 2:
                    clearScreen();
                    sub_menu3:
                    cout << "Anda memilih Mizone" << endl;;
                    cout << "1. QTY " << endl;
                    cout << "2. Total " << endl;
                    cout << "Masukkan Pilihan: ";
                    cin >> menu4;

                    if (menu4 == 1){
                        cout << "Masukan Jumlah yang ingin dipesan (QTY) : " ;
                        cin >> pesan;
                        goto sub_menu3;
                    } else if (menu2 == 2){
                        harga = 8000 * pesan;
                        cout << "Jumlah Harganya adalah " << harga ;
                        goto sub_menu3;
                    } else {
                        cout << "Pilihan Tidak valid";
                        goto sub_menu3;
                    }
                    break;
                case 3:
                    goto sub_menu3;
                    break;
            break;
            }
        case 3:
        return 0;
            break;
    }
    
}