#include <iostream>
using namespace std;

class ContohAkses {
    private:
        int privateVar; //Hanya bisa diakses dari dalam class ini sendiri
    
    protected:
        int protectedVar; //Bisa diakses dari class ini dan class turunannya

    public:
        int publicVar; //Bisa diakses dari mana saja

    // Constructor
    //menginisialisasi nilai Variabel
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    //Output dengan Mengakses dari class
    void tampilkanSemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl; //bisa dialses
        cout << protectedVar << endl; //bisa diakses
        cout << publicVar << endl; //bisa diakses
    }
};

//class turunan dari ContohAkses
class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
        cout << protectedVar << endl; //bisa diakses
        cout << publicVar << endl; //bisa diakses
        // cout << privateVar << endl; // error
    }
};

int main () {
    ContohAkses obj;
    obj.tampilkanSemua(); //Akses dari dalam class

    cout << "\nAkses dari luar class : " << endl; //Akses dari luar class
    // cout << obj.privateVar << endl; // error 
    // cout << obj.protectedVar << endl; // error
    cout << obj.publicVar << endl; //Bisa diakses

    cout <<"\nAkses dari kelas Turunan " << endl;
    Turunan tur;
    tur.aksesProtected(); //Akses dari class Turunan
}
