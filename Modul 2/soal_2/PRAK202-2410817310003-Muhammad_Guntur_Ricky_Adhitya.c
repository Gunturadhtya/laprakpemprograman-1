#include <stdio.h>

int main(){
    float nPertama = 0;
    float nKedua = 0;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nPertama);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nKedua);

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", nPertama, nKedua, (nPertama+nKedua));
    return 0;
}