#include <iostream> //header c++
using namespace std; //untuk menyingkat penggunaan std di tiap operasi Input/Output

int main () {
    float luas, p, l; //deklarasi

    //inputan
    cout << "Masukkan panjang : ";
    cin >> p;

    cout << "Masukkan lebar : ";
    cin >> l;

    luas = p * l; //proses
    cout << "Luas = " << luas << endl; //output

    return 0;
}
