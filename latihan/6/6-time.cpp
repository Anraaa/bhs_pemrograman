#include <iostream>

using namespace std;

typedef struct {
    int hh;
    int mm;
    int ss;
    } Time;
Time t;
long int seconds;

int main()
{
    cout << "Masukkan jam : ";
    cin >> t.hh;

    cout << "Masukkan menit : ";
    cin >> t.mm;

    cout << "Masukkan detik : ";
    cin >> t.ss;

    seconds = t.hh * 3600 + t.mm * 60 + t.ss;

    cout << "Total detik : " << seconds << endl;
  
    return 0;
}