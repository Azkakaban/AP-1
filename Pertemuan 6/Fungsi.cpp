#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan
// Fungsi untuk menampilkan pesan
void tampilkanPesan(){
    cout << "==== SELAMAT DATANG DI AP 1 ====" << endl;
}

// Fungsi dengan nilai balikan
// Fungsi untuk menghitung nilai a + b dan mengemblikan nilainya
int tambah(int a, int b){
    return a + b;
}

// Fungsi Overload
// Fungsi Overload karena tipe data Fungsi dan Parameter Formal integer sedangkan Parameter Aktual Float
int kali(int a, int b){
    return a * b;
}

//Fungsi untuk menghitung nilai a * b tetapi dengan hasil Float
double kali (double a, double b) {
    return a * b;
}

// Fungsi Rekursif : menghitung nilai faktorial
// Fungsi Rekursif yang mengacu pada dirinya sendiri, dan memiliki 2 bagian utama yaitu basis dan rekursi di mana proses rekursi akan mendekati nilai basis sampai proses rekursi selesai
int faktorial(int n){
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n -1);
    }
}

int main () {
    system("CLS");

    // menggunakan fungsi tanpa nilai balikan
    tampilkanPesan(); //mengAkses fungsi tampilkanPesan

    int x = 5, y = 3;

    // menggunakan fungsi dengan nilai balikan
    int hasilTambah = tambah(x, y); //deklarasi sekaligus inisialisasi nilai hasilTambah dengan nilai balikan dari fungsi tambah()
    cout << "hasil penjumlahan : " << hasilTambah << endl;

    // menggunakan fungsi overload
    int hasilKaliInt = kali(x, y);
    double hasilKaliDouble = kali(5.5, 2.0);
    cout << "hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "hasil perkalian (double) : " << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
}
