#include <iostream>

using namespace std;

void tambah(int a, int b){
    cout << "TAMBAH : " << a + b <<endl;
}
void kurang(int a, int b){
    cout << "KURANG" << a - b <<endl;
}

void kali(int a, int b){
    cout << "KALI" << a * b <<endl;
}

void bagi(int a, int b){
    cout << "BAGI" << a / b <<endl;
}

int main(){
    int a, b;
    char pilih;
    do{
        cout << "MENU" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Kali" << endl;
        cout << "4. Bagi" << endl;
        cout << "5. Exit" << endl;
        cout << "Pilihan : ";
        cin >> pilih;

        switch (pilih){
            case '1':
                cout << "Masukkan Angka 1 : ";
                cin >> a;
                cout << "Masukkan Angka 2 : ";
                cin >> b;
                tambah(a, b);
                break;
            case '2':
                cout << "Masukkan Angka 1 : ";
                cin >> a;
                cout << "Masukkan Angka 2 : ";
                cin >> b;
                kurang(a, b);
                break;
            case '3':
                cout << "Masukkan Angka 1 : ";
                cin >> a;
                cout << "Masukkan Angka 2 : ";
                cin >> b;
                kali(a, b);
                break;
            case '4':
                cout << "Masukkan Angka 1 : ";
                cin >> a;
                cout << "Masukkan Angka 2 : ";
                cin >> b;
                bagi(a, b);
                break;
            case '5':
                cout << "EXIT" << endl;
                break;
            default:
                cout << "Pilihan Salah!" << endl;
        }
    }while(pilih != '5');
    return 0;
}