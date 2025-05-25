#include <iostream>
using namespace std;

int main()
    {
        // Program untuk menentukan volume dan luas sebuah bola
        float luas, volume, jari;
        const float phi = 3.14; // konstanta 

        cout << "Input jari-jari : ";
        cin >> jari;

        volume = ((float)4/3) * (phi) * (jari*jari*jari); // menghitung volume bola
        luas = 4 * phi * jari * jari; //menghitung luas permukaan bola

        //output
        cout << "Volume : " << volume << endl;
        cout << "luas : " << luas<<endl;
    }
