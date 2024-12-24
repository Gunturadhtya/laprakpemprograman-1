#include <stdio.h>

void Biodata(int tahunLahir, char nama[], char asal[]){
    int tahun_sekarang = 2020;
    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", tahun_sekarang-tahunLahir);
    printf("Saya Adalah Angkatan : 2020\n");
    printf("Asal Saya dari : %s\n", asal);
}

int main() {
    int tahunLahir;
    char A[20], B[15];
    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&A);
    scanf(" %[^\n]%*c",&B);
    Biodata(tahunLahir, A, B);
    return 0;
}