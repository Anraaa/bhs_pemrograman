#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;
    for (int i = 1; i<=n; i++ ){
        for (int s = 1; s<=n-i; s++){
            cout << " ";
        }
        for (int j = 1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}