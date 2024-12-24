#include <stdio.h>
#define PI 22.0/7.0

int main(){
    float jariJari = 0;
    float tinggi = 0;

    scanf("%f %f", &jariJari, &tinggi);
    float volume = PI * (jariJari*jariJari) * tinggi;
    float luas = 2*PI*jariJari*(jariJari+tinggi);
    float keliling = 2*PI*jariJari;

    printf("Volume = %.2f\nLuas = %.2f\nKeliling = %.2f",volume,luas,keliling);
    return 0;
}