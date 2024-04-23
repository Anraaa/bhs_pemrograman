#include <iostream>

using namespace std;

class Calculator {
    double angka1, angka2;

public:
    void input() {
        cout << "masukkan angka pertama : ";
        cin >> angka1;

        cout << "masukkan angka kedua : ";
        cin >> angka2;
    }

    void calculate(int pilihan) {
        switch(pilihan){
            case 1 :
                cout << "Hasil : " << angka1 + angka2 << endl;
                break;
            case 2 :
                cout << "Hasil : " << angka1 - angka2 << endl;
                break;
            case 3 :
                cout << "Hasil : " << angka1 * angka2 << endl;
                break;
            case 4 :
                if(angka2 != 0) {
                    cout << "Hasil : " << angka1 / angka2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid option selected." << endl;
                break;
        }
    }
};

int main(){
    int pilihan;
    Calculator calc;

    calc.input();

    cout << endl;
    cout << "MENU" << endl;
    cout << "1. Pertambah " << endl;
    cout << "2. Kurang " << endl;
    cout << "3. Kali " << endl;
    cout << "4. bagi " << endl;
    cout << "Masukkan Pilihan ";
    cin >> pilihan;

    calc.calculate(pilihan);

    return 0;
}