#include <stdio.h>

main(){
    system("cls");

    char nama[50], nim[50], kom;
    float ipk;

    printf("Masukkan Nama Anda : "); scanf("%[^\n]s", nama);
    printf("Masukkan NIM Anda : ");  scanf("%s", nim);
    getchar();
    printf("Masukkan KOM Anda : ");  scanf("%c", &kom);
    printf("Masukkan IPK Anda : ");  scanf("%f", &ipk);

    printf("\nNama Anda : %s", nama);
    printf("\nNim Anda : %s", nim);
    printf("\nKOM Anda : %c", kom);
    printf("\nIPK Anda : %.2f", ipk);



}