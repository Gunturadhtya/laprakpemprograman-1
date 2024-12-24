#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
    int hasil = (nilai1 - nilai2);
    return abs(hasil);
}

int mutlak(int angka){
    return abs(angka);
}


int main(){
    int a, b, c, d;

    scanf("%d", &a); // x1
    scanf("%d", &c); // y1
    scanf("%d", &b); // x2
    scanf("%d", &d); // y2

    int Hasil = hitung(a, b) + hitung(c, d);
    printf("%d", mutlak(Hasil));

    return 0;
}