#include <stdio.h>

int main(){
    int jumlah_ruang = 0;
    scanf("%d", &jumlah_ruang);

    int jumlah_zetsu[jumlah_ruang];
    for(int i = 0; i < jumlah_ruang; ++i){
        scanf("%d", &jumlah_zetsu[i]);
    }

    for(int i = 0; i < jumlah_ruang; ++i){
        printf("%d ", jumlah_zetsu[i] * (i+1));
    }
}