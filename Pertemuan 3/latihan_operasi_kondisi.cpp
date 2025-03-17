#include <iostream>
using namespace std;

main(){
    int nilai;

    cout<<"Masukkan Nilai : "; cin>> nilai;

    if (nilai % 10 == 0) {
        if (nilai % 5 == 0){
            cout<<nilai<<" Habis dibagi 5 dan 10"<<endl;
        }
        else{
            cout<<nilai<<" Habis dibagi 10"<<endl;
        }
    }
    else if (nilai % 5 == 0){
        cout<<nilai<<" Habis dibagi 5"<<endl;
    }
    else cout<<nilai<<" Tidak Habis dibagi 5 dan 10"<<endl;
}