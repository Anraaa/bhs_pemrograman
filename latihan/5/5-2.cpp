#include <iostream>

using namespace std;

int main()
{
    string name;
    string city;

    cout << "What is your name? " << endl;
    cin >> name;

    cout << endl;

    cout << "Where do u live? " << endl;
    cin >> city;

    cout << endl;
    
    cout << "Nice to Meet u " << name << " from " << city << endl;

    return 0;
}