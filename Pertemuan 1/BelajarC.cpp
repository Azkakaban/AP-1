#include <stdio.h> // header untuk C
#include <conio.h> // header untuk getch()

int main() {
    //deklarasi variabel
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // get string

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); //digunakan untuk mengambil dan membuang karakter newline (\n) yang tersisa di buffer setelah scanf("%d", &nim);.

    printf("Masukkan kom : ");
    gets(kom); 

    printf("Masukkan ip : ");
    scanf("%f", &ip); 

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom); //untuk menampilkan string
    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch(); //menerima inputan karakter tanpa menekan ENTER dan tidak ditampilkan di layar.
}
