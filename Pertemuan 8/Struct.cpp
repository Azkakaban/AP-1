#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Alamat { //struct Alamat
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main () {
    system("CLS");
    Mahasiswa mhs1; //deklarasi

    //inisialisasi
    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa; //vector mahasiswa denan tipe data Mahasiswa
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    //input data mahasiswa dengan looping
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1); //mengisi data mhs1 ke vector mahasiswa
    }

    //Output
    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }

}
