#include <stdio.h>

void operasi(int pilihan){
    float nilai_pertama;
    printf("Masukkan nilai pertama : ");
    scanf("%f", &nilai_pertama);

    float nilai_kedua;
    printf("Masukkan nilai kedua : ");
    scanf("%f", &nilai_kedua);
    float hasil = 0;
    char operasi[][32] = {"penjumlahan", "pengurangan", "perkalian", "pembagian"};
    switch (pilihan)
    {
    case 1:
        hasil = nilai_pertama + nilai_kedua;
        break;
    
    case 2:
        hasil = nilai_pertama - nilai_kedua;
        break;

    case 3:
        hasil = nilai_pertama * nilai_kedua;
        break;

    case 4:
        hasil = nilai_pertama / nilai_kedua;
        break;

    default:
        break;
    }

    printf("Hasil %s antara %.2f dengan %.2f adalah %.2f\n", operasi[pilihan-1], nilai_pertama, nilai_kedua, hasil);
}

int main(){

    while(1){
        printf("Pilih Program\n1.Penjumlahan\n2.Pengurangan\n3.Perkalian\n4.Pembagian\n5.Exit\n");

        int pilihan;
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);
        
        if(pilihan == 5){
            printf("Terimakasih, telah menggunakan kalkulator Guntur\n");
            break;
        }else if(pilihan > 0 && pilihan < 5){
            operasi(pilihan);
        }else{
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
    return 0;
}