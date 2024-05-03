#include <iostream>
#include <cctype>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

int main()
{
    string a;
    char pil;

    do {
        clearScreen();
        cout << "Masukkan Angka : " ;
        cin >> a;

        bool valid = true;
        for (int ch : a){
            if (!isdigit(ch)){ // kalau huruf isalpha
                getchar();
                cout << endl;
                cout << "Inputan harus angka" << endl;
                cout << "Tap To Continue...";
                valid = false;
            }
        }

        if (!valid){
            getchar();
            continue;
        }

        int angka = stoi(a);

        if (angka < 0){
            cout << "Angka " << angka << " adalah bilangan negatif" ;
        }
        else if (angka == 0){
            cout << "Angka " << angka << " adalah bilangan nol";
        }
        else {
            cout << "Angka " << angka << " adalah bilangan positif";
        }

        cout << endl;

        cout << "Ingin Mengulangi? (y/Y) : ";
        cin >> pil;
    } while (pil != 'n' && pil != 'N');
    
    return 0;
}
