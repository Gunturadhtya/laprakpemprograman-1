#include <stdio.h>
#include <string.h>
int main(){
    char namaLengkap[128] = " ";
    char nim[16] = "0000000000000";
    int kelasParalel = 0;
    char ttl[64] = "Kota/dd-mm-yyyy";
    char alamat[256] =  " ";
    char hobby[256] = " ";
    char noHP[16] = "000000000000";

    printf("Nama\t\t\t: ");
    if(fgets(namaLengkap, sizeof(namaLengkap), stdin) != NULL){
        size_t len = strlen(namaLengkap);
        if(len > 0 && namaLengkap[len - 1] == '\n'){
            namaLengkap[len - 1] = '\0';
        }
    }
    printf("NIM\t\t\t: ");scanf("%s", &nim);
    printf("Kelas Paralel\t\t: ");scanf("%d", &kelasParalel);
    
    getchar();
    printf("Tempat/Tanggal Lahir\t: ");
    if(fgets(ttl, sizeof(ttl), stdin) != NULL){
        size_t len = strlen(ttl);
        if(len > 0 && ttl[len - 1] == '\n'){
            ttl[len - 1] = '\0';
        }
    }
    
    printf("Alamat\t\t\t: ");
    if(fgets(alamat, sizeof(alamat), stdin) != NULL){
        size_t len = strlen(alamat);
        if(len > 0 && alamat[len - 1] == '\n'){
            alamat[len - 1] = '\0';
        }
    }
    
    printf("Hobby\t\t\t: ");
    if(fgets(hobby, sizeof(hobby), stdin) != NULL){
        size_t len = strlen(hobby);
        if(len > 0 && hobby[len - 1] == '\n'){
            hobby[len - 1] = '\0';
        }
    }
    printf("No Handphone\t\t: "); scanf("%s", &noHP);

    printf("Output : \n");
    printf("Nama\t\t\t: %s\n", namaLengkap);
    printf("NIM\t\t\t: %s\n", nim);
    printf("Kelas Paralel\t\t: %d\n", kelasParalel);
    printf("Tempat/Tanggal Lahir\t: %s\n", ttl);
    printf("Alamat\t\t\t: %s\n", alamat);
    printf("Hobby\t\t\t: %s\n", hobby);
    printf("No Handphone\t\t: %s\n", noHP);

    return 0;
}