#include <iostream>
#include <cctype>

using namespace std;

int main(){

    char huruf;

    for (huruf = 'a'; huruf <= 'z'; huruf++){
        cout << huruf << endl;
        cout << (char)toupper(huruf) << endl;
} 

return 0;
}