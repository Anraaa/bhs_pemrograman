#include <iostream>

using namespace std;

int main()
{
    cout << "Menghitung Gaji PNS" << endl;
    cout << "Gaji Pokok Anda : Rp. 5.000.000" << endl;
    int gaji = 5000000;
    cin >> gaji;

    cout << "Tunjangan 1 Anak / bulan : Rp. 1.000.000" << endl;
    int tunjangan1 = 1000000;
    cin >> tunjangan1; 

    cout << "Tunjangan Istri / bulan : Rp. 2.5000.000" << endl;
    int tunjangan2 = 2500000;
    cin >> tunjangan2;

    int total = gaji + tunjangan1 + tunjangan2;
    cout << "Total Gaji Bersih Anda : " << total << endl;

  return 0;
}