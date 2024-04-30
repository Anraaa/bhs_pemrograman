#include <iostream>

using namespace std;

int main(){
for (int a; a <= 10; a++){
    cout << a << endl;
}


char huruf;

for (huruf = 'a'; huruf <= 'z'; huruf++){
    cout << huruf << endl;
    for (huruf.uper = 'a'; huruf <= 'z'; huruf++){
        cout << huruf << endl;
    }
} 

return 0;
}