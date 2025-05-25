#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; // Variabel Global

void namaVariabel(){
    string namaLokal = "Komputer"; //Variabel Lokal

    // coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;
}

int main() {
    namaVariabel(); //MengAkses Fungsi namaVariabel()

    // coba akses
    cout << namaGlobal << endl;

    // coba akses
    // cout << namaLokal << endl; // ga iso
}
