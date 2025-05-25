#include <iostream>
using namespace std;

int main() {
    int angka; //deklarasi
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka; //input

    if (angka % 10 == 0) {
        cout << angka << " adalah kelipatan dari 10." << endl; //kerjakan jika angka kelipatan 10
    } else if (angka % 5 == 0) {
        cout << angka << " adalah kelipatan dari 5." << endl; //kerjakan jika angka kelipatan 5
    } else {
        cout << angka << " bukan kelipatan dari 5 atau 10." << endl; //kerjakan jika bukan kelipatan kelipatan 10 dan 5
    }

 return 0;
}
