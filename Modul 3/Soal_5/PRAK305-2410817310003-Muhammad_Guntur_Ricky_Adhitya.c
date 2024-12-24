#include <stdio.h>

int main(){
    int input_detik;

    scanf("%d", &input_detik);

    int hari, jam, menit, detik;

    hari = input_detik/86400;
    jam = (input_detik/3600)-(hari*24);
    menit = (input_detik%3600)/60;
    detik = input_detik%60;

    if(input_detik >= 86400){
        printf("%d hari %.2d:%.2d:%.2d", hari, jam, menit, detik);
    }else{
        printf("%.2d:%.2d:%.2d", jam, menit, detik);
    }
    return 0;
}