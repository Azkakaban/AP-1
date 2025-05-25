#include <iostream>
using namespace std;

int main() {
    string password, sandi, expected = ""; //deklarasi dan inisialisai expected dengan karakter kosong

    cout << "Masukkan kata sandi : ";
    cin >> password; //input password

    cout << "Masukkan kata : ";
    cin >> sandi; //input sandi

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) {
        expected += password.substr(0, i + 1); //menambahkan expected dengan karakter dari password indeks ke 0 sampai indeks ke i + 1
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl; //output
    } else {
        cout << "Tulisan agen salah" << endl;//output
    }

    return 0;
}
