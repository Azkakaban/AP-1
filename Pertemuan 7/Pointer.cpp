#include <iostream>
using namespace std;

//Fungsi Penjumlahan a dan b (Bukan Pointer)
void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

//Fungsi Penjumlahan menggunakan pointer
void penjumlahanPointer (int *a, int *b) {
    *a += *b;
    cout << *a << endl;
}

//Fungsi Menggandakan nilai a menggunakan pointer
void doubleValue (int *a) {
    *a *= 2;
    cout << *a << endl;
}

int main() {
    system("CLS");

    // Deklarasi Pointer
    int number = 35;
    int *pointer_number = &number;

    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    // Pointer Operation
    // *pointer_number = 25;
    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num; //Pointer menunjuk ke elemen Pertama Array
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat memori variabel num = " << &num[3] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    // *pointer_num += 5; // 6
    // cout << "Isi variabel num = " << num[0] << endl;
    // cout << "Alamat memori variabel num = " << &num[0] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;


    // Pointer in Parameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2); //MengAkses Fungsi penjumlahan tanpa mengubah nilai
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanPointer(&num1, &num2); //MengAkses Fungsi penjumlahanPointer dan mengubah nilai num1 secara langsung melalui pointer
    // cout << num1 << endl;
    // cout << num2 << endl;

    // Pointer in Pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;

    // cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_score " << &ptr_pointer_score << endl;


    // Dynamic Pointer
    // int *ptr = new int; //Allocation
    // *ptr = 30;
    // cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    // delete ptr; //deallocation
    // cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;


    // Contoh
    // int n;
    // cout << "Masukkan sebuah angka = ";
    // cin >> n;

    // doubleValue(&n); //MengAkses Fungsi doubleValue untuk menggandakan nilai n melaui pointer
    // cout << "Nilai angka setelah di kali 2 = " << n << endl;
}
