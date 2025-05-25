#include <iostream>
#include <vector> //header untuk memakai vector
using namespace std;

int main () {
    // Vector Declaration & Initialization

    vector<string> nama_karyawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"}; //vector mirip seperti Array tetapi dinamis, tidak mesti ditentukan besar vectornya

    // for (string karyawan : nama_karyawan) { //Looping berbasis Range
    //     cout << karyawan << endl;
    // }

    // Add data to Vector
    nama_karyawan.push_back("Dhafa"); //Menambahkan string "Dhafa" ke vector nama_karyawan di indeks terakhir

    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Delete data from Vector
    nama_karyawan.pop_back();  // menghapus elemen terakhir dari vector nama_karyawan

    nama_karyawan.erase(nama_karyawan.begin() + 3); //menghapus elemen indeks ke 3

    //output
    for (int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }
}
