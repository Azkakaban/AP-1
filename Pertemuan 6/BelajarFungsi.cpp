#include <iostream>
using namespace std;

//fungsi void tanpa pengembalian nilai, seperti procedure jika di dalam Pascal
void sapa(string nama) { //sapa adalah nama fungsi, dan yang di dalam kurung adah parameter formal fungsi
    cout << "Halo " << nama << "! Selamat belajar C++!" << endl;
}

int main () { //fungsi Utama untuk Main Program
    string namaPengguna = "Alya";

    sapa(namaPengguna); //MengAkses Fungsi sapa dengan parameter aktual namaPengguna

    return 0;
}
