#include <iostream>

using namespace std;

class Nama {
    public : 
        string fName, mName, lName;

        void full(string fName, string mName, string lName){
            cout << "FULL NAME" << fName + " " << mName << " " << lName << endl;
        }
};

int main(){
    Nama n;
    int pilih;
    char pil;

menu: 
    cout << "MENU" << endl;
    cout << "1. Input" << endl;
    cout << "2. Exit" <<endl;
    cout << "pilihan : " ;
    cin >> pilih;

    switch(pilih){
        case 1:
            cout << "Masukkan Nama Depan : " ;
            cin >> n.fName;
            cout << "Masukkan Nama Tengah : " ;
            cin >> n.mName;
            cout << "Masukkan Nama Akhir : " ;
            cin >> n.lName;
            n.full(n.fName, n.mName, n.lName);
            break;
        case 2:
            goto keluar;
            break;

        default:
            cout << "Pilihan Salah" << endl;
            break;
        }
    
        cout << "Ingin Mengulangi ? (Y/N) : " ;
        cin >> pil;
        if ((pil == 'Y' || pil == 'y'))
            {goto menu;}
        else if (pil == 'N' || pil == 'n')
            {goto keluar;}

        keluar:
            cout << "\n TERIMA KASIH" << endl;
    
    return 0;
}