#include <stdio.h>

int main(){
    int angka;

    scanf("%d", &angka);

    if(angka == 0){
        printf("Nol");
    }else if(angka > 99){
        printf("Anda Menginput Melebihi Limit Bilangan");
    }else if(angka == 10 || angka >= 20){
        printf("Puluhan");
    }else if (angka > 10)
    {
        printf("Belasan");
    }else if (angka > 0){
        printf("Satuan");
    }
    

    return 0;
}