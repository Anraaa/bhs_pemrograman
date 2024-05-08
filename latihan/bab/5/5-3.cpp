#include <iostream>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

int main()
{
    int pesanan, jumlah;

    clearScreen();
    cout << "Welcome To My Warteg Gaming" << endl;
    cout << "Menu Pilihan" << endl;
    cout << "1. Nasi Bakar Pro (Rp 7.000)" << endl;
    cout << "2. Ayam Goreng Ultra (Rp. 8.000)" << endl;
    cout << "3. Hot Cooler Tea (Rp 5.000)" << endl;

    cout << "Masukkan Pesanan mu : ";
    cin >> pesanan;

    cout << "Masukkan Jumlah Pesanan mu : ";
    cin >> jumlah;

    if(pesanan == 1)
    {
        cout << endl;
        cout << "Pesanan anda adalah Nasi Bakar Pro sebanyak " << jumlah << " porsi" << endl;
        cout << "Harga yang harus dibayar adalah Rp " << jumlah * 7000 << endl;
        cout << "Pajak 10% : Rp " << jumlah * 7000 * 0.1 << endl;
        cout << "Total yang harus dibayar adalah Rp " << jumlah * 7000 * 1.1 << endl;
    }
    else if(pesanan == 2)
    {
        cout << endl;
        cout << "Pesanan anda adalah Ayam Goreng Ultra sebanyak " << jumlah << " porsi" << endl;
        cout << "Harga yang harus dibayar adalah Rp " << jumlah * 8000 << endl;
        cout << "Pajak 10% : Rp " << jumlah * 8000 * 0.1 << endl;
        cout << "Total yang harus dibayar adalah Rp " << jumlah * 8000 * 1.1 << endl;
    }
    else if(pesanan == 3)
    {
        cout << endl;
        cout << "Pesanan anda adalah Hot Cooler Tea sebanyak " << jumlah << " porsi" << endl;
        cout << "Harga yang harus dibayar adalah Rp " << jumlah * 5000 << endl;
        cout << "Pajak 10% : Rp " << jumlah * 5000 * 0.1 << endl;
        cout << "Total yang harus dibayar adalah Rp " << jumlah * 5000 * 1.1 << endl;
    }
    else
    {
        cout << "Pesanan tidak tersedia" << endl;
    } 

    return 0;
}