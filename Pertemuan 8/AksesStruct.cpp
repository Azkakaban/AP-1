#include<iostream>
#include<string>
using namespace std;

struct Mahasiswa { //struct Mahasiswa
    string nama;
    int umur;
    float ipk;
};

int main() {
    Mahasiswa mhs1; //deklarasi mhs1 dengan tipe data Mahasiswa

    //Inisialisasi
    mhs1.nama = "Alya"; //MengAkses menggunakan tanda '.'
    mhs1.umur = 20;
    mhs1.ipk = 4.00;

    //Output
    // cout << "Akses dengan . : " << endl;
    // cout << "Nama : " << mhs1.nama << endl;
    // cout << "Umur : " << mhs1.umur << endl;
    // cout << "IPK : " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1; //deklarasi pointer ptrMhs dengann tipe data Mahasiswa dan Inisialisasi ptrMhs
    //Output
    cout << "Akses dengan -> : " << endl; //MengAkses dengan tanda '->'
    cout << "Nama : " << ptrMhs->nama << endl;
    cout << "Umur : " << ptrMhs->umur << endl;
    cout << "IPK : " << ptrMhs->ipk << endl;

}
