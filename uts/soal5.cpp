#include <iostream>

using namespace std;

int main()
{
    int n1, n2, hasil;

    cout << "Masukkan Angka Pertama : ";
    cin >> n1;

    cout << "Masukkan Angka Kedua : ";
    cin >> n2;

    hasil = n1 + n2;
    cout << "Penjumlahan : " << hasil << endl;

    hasil = n1 - n2;
    cout << "Pengurangan : " << hasil << endl;

    hasil = n1 * n2;
    cout << "Perkalian : " << hasil << endl;

    hasil = n1 / n2;
    cout << "Pembagian : " << hasil << endl;
}