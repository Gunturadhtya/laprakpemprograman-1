#include <stdio.h>
int main()
{
    int sepatuA = 400000;
    int sepatuB = 350000;
    printf("Harga sepatu A adalah %d\n", sepatuA);
    printf("Harga sepatu B adalah %d\n", sepatuB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", sepatuA - (sepatuA * 0.13));
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", sepatuB - (sepatuB * 0.21));
}