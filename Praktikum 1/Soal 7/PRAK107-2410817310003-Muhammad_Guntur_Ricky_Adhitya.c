#include <stdio.h>
int main(){
    int sisi_a = 4;
    int sisi_b = 5;
    int sisi_c = 7;
    int keliling = sisi_a + sisi_b + sisi_c;
    int pagar_per_meter = 85000;
    printf("Diketahui :\nPanjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",sisi_a, sisi_b, sisi_c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", pagar_per_meter);
    printf("Jawaban\nBiaya yang diperlukan Pak Dengklek adalah : Rp %d\n", (keliling * pagar_per_meter));
}