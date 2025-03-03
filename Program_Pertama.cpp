#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

main(){
    system("cls");
    string nama, nim;
    char kom, gender;
    float ipk;


    cout<<"Hello World";
    cout<<"\nMasukkan Nama Anda : ";//cin>>nama;
    getline(cin, nama);
    cout<<"Masukkan Kom Anda : ";cin>>kom;
    cout<<"Masukkan NIM Anda Anda : ";cin>>nim;
    cout<<"Masukkan IPK Anda : ";cin>>ipk;
    cout<<"Masukkan Jenis Kelamin (L / P) : ";
    gender = getch();
    
    cout<<fixed<<setprecision(2);
    cout<<"\n\nNama Anda : "<<nama<<endl;
    cout<<"Jenis Kelamin : ";
    putchar(gender);
    cout<<"\nKOM : "<<kom;
    cout<<"\nNIM : "<<nim;
    cout<<"\nIPK : "<<ipk;
}