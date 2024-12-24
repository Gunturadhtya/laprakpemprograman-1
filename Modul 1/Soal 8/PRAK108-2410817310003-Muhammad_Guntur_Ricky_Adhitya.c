#include <stdio.h>
int main(){
    float putaran = 5;
    float jarak_tempuh = 14;
    float PI = 3.14159265358979323846;
    printf("Diketahui :\nPak Dengklek mengelilingi taman = %0.f Putaran\nJarak tempuh Pak Dengklek = %0.f Kilometer\n\n\n", putaran, jarak_tempuh);
    printf("Jawaban : \nJari-jari taman yang dikelilingi Pak Dengklek adalah %.02f", ((jarak_tempuh/putaran)/(2*PI)));
}