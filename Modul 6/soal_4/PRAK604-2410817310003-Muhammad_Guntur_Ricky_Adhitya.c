#include <stdio.h>
#include <string.h>

void kode_shikamaru(char bahasa[], char kode[]){
    if(strlen(bahasa) != strlen(kode)){
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return;
    }
    int pagar = 0, bintang = 0;
    int panjang = strlen(bahasa);
    for(int i = 0; i < panjang; ++i){
        if((bahasa[i] == kode[i]) && (bahasa[i] == ' ')){
            printf(" ");
        }
        else if(bahasa[i] == kode[i]){
            printf("*");
            bintang++;
        }else{
            printf("#");
            pagar++;
        }
    }
    printf("\n");
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);

    if(bintang >= pagar)printf("Pesan Asli\n");
    else printf("Pesan Palsu\n");
}

int main(){
    char bahasa[100];
    char kode[100];
    scanf("%[^\n]s", &bahasa);
    getchar();
    scanf("%[^\n]s", &kode);
    getchar();

    kode_shikamaru(bahasa, kode);

    return 0;
}