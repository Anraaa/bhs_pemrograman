#include <iostream>

using namespace std;

void menu (int n1,int n2) {
    int n1, n2;

    cout << "Masukkan Angka Pertama : ";
    cin >> n1;

    cout << "Masukkan Angka Kedua : ";
    cin >> n2;
}

void tambah(int n1, int n2) {
    int hasil = n1 + n2;
    cout << "Penjumlahan : " << hasil << endl;
}

void kurang(int n1, int n2) {
    int hasil = n1 - n2;
    cout << "Pengurangan : " << hasil << endl;
}

void kali(int n1, int n2) {
    int hasil = n1 * n2;
    cout << "Perkalian : " << hasil << endl;
}

void bagi(int n1, int n2) {
    if(n2 != 0) {
        int hasil = n1 / n2;
        cout << "Pembagian : " << hasil << endl;
    } else {
        cout << "Error: Pembagi tidak boleh nol" << endl;
    }
}

int main()
{
    

    tambah(n1, n2);
    kurang(n1, n2);
    kali(n1, n2);
    bagi(n1, n2);

    return 0;
}