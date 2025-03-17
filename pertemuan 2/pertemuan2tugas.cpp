#include <iostream>
using namespace std;

int main(){
    float volume, jari, luas;

    cout<<"Masukkan Jari jari : "; cin>>jari;

    volume = 4 / float(3) * 3.14 * jari * jari * jari;
    luas = 4 * 3.14 * jari * jari;

    cout<<"Volume : "<<volume<<endl;
    cout<<"Luas : "<<luas<<endl;
}