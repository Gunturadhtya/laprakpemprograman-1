#include <stdio.h>
#include <math.h>
int main(){
    int alas =  5;
    int tinggi = 12;
    int sisi_a = tinggi;
    int sisi_c = alas;
    double pythagoras = (sisi_a*sisi_a)+(sisi_c*sisi_c);
    double sisi_b = sqrt(pythagoras);
    int keliling = sisi_a+sisi_b+sisi_c;
    int luas = 0.5*alas*tinggi;
    printf("Diketahui :\nAlas = %d cm\nTinggi = %d cm\n\nJawab :\nSisi A = %d cm\nSisi B = %0.f cm\nSisi C = %d cm\nKeliling = %d cm\nLuas = %d cm\n", alas, tinggi, sisi_a, sisi_b, sisi_c, keliling, luas);
}