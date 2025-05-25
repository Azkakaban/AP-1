
#include <iostream>
using namespace std;

int main() {

    // penjumlahan matriks 2 x 2
    //deklarasi matriks 2 dimensi
    int matriks1[2][2];
    int matriks2[2][2];
    int hasil[2][2];

    cout << "Matriks 1 : " << endl;
    //input nilai Matriks 1 dengan Looping
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j];
        }
    }

    //input nilai Matriks 2 dengan Looping
    cout << "Matriks 2 : " << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j];
        }
    }

    cout << "Hasil Penjumlahan" << endl;
    //Looping untuk menjumlakan Matriks 1 dan Matriks 2 sekaligus Output
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

}
