
#include <iostream>
using namespace std;

int main() {
    // Goto Label , untuk melompat ke bagian program yg lain
    // Hello World, Fasilkom-TI, ILmu Komputer, IKLC
    // -> Hello World, IKLC, Ilmu Komputer, Fasilkom-TI

    // a: 
    //     cout << "Hello World" << endl;
    //     goto d;
    // b:
    //     cout << "Fasilkom-TI" << endl;
    //     return 0;
    // c:
    //     cout << "Ilmu Komputer" << endl;
    //     goto b;
    // d: 
    //     cout << "IKLC" << endl;
    //     goto c;

    // menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if(i % 2 == 0) {
    //     cout << i << endl;
    // } i--;

    // if(i >= 2) {
    //     goto genap;
    // }


    // Statement While
    //mengerjakan blok dalam while jika statement memenuhi dan minimal looping dikerjakan sebanyak 0 kali
    // int i = 1;
    // while(i <= 10) {
    //     if (i % 2 == 0) {
    //         cout << i << " ";
    //     } i++;
    // }

    // Statement Do-While
    //mengerjakan blok dalam do while terlebih dahulu baru diperiksa, jika memenuhi maka lanjutkan loopingnya, minimal dikerjakan sebanyak 1 kali
    // int i = 1;
    // do {
    //     cout << i << endl;
    // } while (i <= 0);

    // Statement for
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <= 10; i+=2) { 
    //     cout << "Hello World" << endl;
    // }

    // nested for
    // ***** 5 x 5
    // for (int i = 1; i <= 5; i++) {
    //     for(int j = 1; j <= 5; j++) {
    //        cout << " * "; 
    //     }
    //     cout << endl;
    // }

    // segitiga siku-siku
    // for(int i = 1; i <= 5; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
}
