
#include <iostream> // bawaan
#include <cmath> // bawaan, fungsi untuk memakai beberapa Fungsi Matematis seperti sqrt()
#include "headerCustom.h" // header yg buat sendiri

u; //nama lain untuk using namespace std

//fungsi penjumlahan a dan b
int jumlah (int a, int b) {
    return a + b;
}

//fungsi a - b
int kurang (int a, int b) {
    return a - b;
}

int main() {
    system("CLS");
    int n;

    o l jumlah(2, 3) l e; //cout diganti dengan o, << diganti dengan l, dan endl diganti dengan e
    o l kurang(5, 3) l e;

    double angka = 25.0;
    double akar = sqrt(angka); //sqrt Fungsi untuk menghitung nilai Akar Kuadrat
    cout << "Akar dari " << angka << " adalah " << akar << endl;

}
