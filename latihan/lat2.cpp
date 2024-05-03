#include <iostream>
#include <cctype>
#include <iomanip>
#include <algorithm>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

int main()
{
    char pil;

    do {
        do {
            clearScreen();
            cout << "Selamat Datang di Toko Komik" << endl;
            cout << "Daftar Komik Yang Tersedia : " << endl;
            cout << endl;

            cout << "No " << setw(25) << left  << "Judul Buku" << setw(30) << "Penerbit" << endl;
            cout << "1  " << setw(25) << left << "Naruto" << setw(30) << "Shonen Jump" << endl;
            cout << "2  " << setw(25) << left << "One Piece" << setw(30) << "Shonen Jump" << endl;
            cout << "3  " << setw(25) << left << "Detective Conan" << setw(30) << "Shonen Sunday" << endl;
            cout << "4  " << setw(25) << left << "Doraemon" << setw(30) << "Shogakukan" << endl;
            cout << "5  " << setw(25) << left << "Dragon Ball" << setw(30) << "Shonen Jump" << endl;

            cout << "Masukkan No Komik : ";
            string no;
            cin >> no;

            // Membersihkan buffer setelah membaca input
            bool valid = true;
            for (char ch : no){
                if (!isdigit(ch)){ // kalau huruf isalpha
                    getchar();
                    cout << endl;
                    cout << "Inputan harus angka" << endl;
                    cout << "Tap To Continue...";
                    valid = false;
                    break;
                }
            }

            if (!valid){
                getchar();
                continue;
            }

            int noKomik = stoi(no);

            switch (noKomik){
                case 1:
                    cout << "Anda memilih komik Naruto" << endl;
                    break;
                case 2:
                    cout << "Anda memilih komik One Piece" << endl;
                    break;
                case 3:
                    cout << "Anda memilih komik Detective Conan" << endl;
                    break;
                case 4:
                    cout << "Anda memilih komik Doraemon" << endl;
                    break;
                case 5:
                    cout << "Anda memilih komik Dragon Ball" << endl;
                    break;
                default:
                    cout << "No komik tidak ditemukan" << endl;
                    break;
            }
        } while (false);

        // Meminta pengguna untuk mengulangi proses atau tidak
        do {
            cout << "Ingin Mengulangi? (y/Y) : ";
            cin >> pil;

            if (!isalpha(pil) || (pil != 'y' && pil != 'Y' && pil != 'n' && pil != 'N')) {
                cout << "Input tidak valid. Silakan masukkan Y/y atau N/n." << endl;
            }
        } while (pil != 'y' && pil != 'Y' && pil != 'n' && pil != 'N');

    } while (pil == 'y' || pil == 'Y');

    return 0;
}