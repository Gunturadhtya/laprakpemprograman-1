#include <stdio.h>

int ordo_global = 0;

int vektor_kali(int vektor_a[], int vektor_b[]){
    int hasil = 0;
    for(int i = 0; i < ordo_global; ++i){
        hasil += vektor_a[i] * vektor_b[i];
    }
    return hasil;  
}

void transpose_matriks(int matriks[][ordo_global], int ordo){
    int matriks_baru[ordo][ordo];
    for(int i = 0; i < ordo; ++i){
        for(int j = 0; j < ordo; ++j){
            matriks_baru[i][j] = matriks[j][i];
        }
    }

    for(int i = 0; i < ordo; ++i){
        for(int j = 0; j < ordo; ++j){
            matriks[i][j] = matriks_baru[i][j];
        }
    }
}

void scan_matriks(int matriks[][ordo_global], int ordo){
    for(int i = 0; i < ordo; ++i){
        for(int j = 0; j < ordo; ++j){
            scanf("%d", &matriks[i][j]);
        }
    }
}

void print_matriks(int matriks[][ordo_global], int ordo){
    for(int i = 0; i < ordo; ++i){
        for(int j = 0; j < ordo; ++j){
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
}

void perkalian_matriks(int ordo){
    int matriks_a[ordo][ordo];
    printf("Matriks A\n");
    scan_matriks(matriks_a, ordo);
    
    int matriks_b[ordo][ordo];
    printf("Matriks B\n");
    scan_matriks(matriks_b, ordo);

    transpose_matriks(matriks_b, ordo);

    int matriks_hasil[ordo][ordo];
    for(int row = 0; row < ordo; ++row){
        for(int collumn = 0; collumn < ordo; ++collumn){
            matriks_hasil[row][collumn] = vektor_kali(matriks_a[row], matriks_b[collumn]);
        }
    }

    printf("Matriks AXB\n");
    print_matriks(matriks_hasil, ordo);
}

int main(){
    scanf("%d", &ordo_global);

    perkalian_matriks(ordo_global);

    return 0;
}