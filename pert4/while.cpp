#include <iostream>

using namespace std;

void penggunaandowhile(){
    cout << "Penggunaan DO WHILE" << endl;
    int a = 1;
    int b = 2;

    do{
        cout << a << endl;
        a = a+1;
    }while (a<=b);
}

void penggunaanwhilebreak(){
    cout << "Penggunaan WHILE BREAK" << endl;
    int a = 0;

    while (a<=5){
        a = a+1;
        if (a == 7)
        {   
            cout << a << endl;
            break;
        }
        cout << "looping while berhenti" << endl;
    }
    cout << "looping di luar while berhenti" << endl;
}

int main(){

    cout << "Penggunaan WHILE" << endl;

    int a = 1;
    int b = 2;

    while(a<=b){
        cout << a << endl;
        a = a+1;
    }

    penggunaandowhile();
    penggunaanwhilebreak();

    return 0;

}