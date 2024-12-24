#include <stdio.h>
#include <math.h>
int main(){
    int sisi_a = 0;
    int sisi_b = 0;
    scanf("%d %d", &sisi_a, &sisi_b);
    float pythagoras = (sisi_b*sisi_b)-(sisi_a*sisi_a);
    float sisi_c = sqrt(pythagoras);
    int keliling = sisi_a+sisi_c+sisi_b;

    int tinggi = sisi_a;
    int alas = sisi_c;
    int luas = 0.5*alas*tinggi;
    printf("Alas = %d cm\nTinggi = %d cm\nKeliling = %d cm\nLuas = %d cm^2\n", alas, tinggi, keliling, luas);
}