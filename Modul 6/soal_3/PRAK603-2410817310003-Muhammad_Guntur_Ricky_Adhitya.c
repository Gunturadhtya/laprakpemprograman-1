#include <stdio.h>

int main(){
    int n1 = 0, n2 = 0;
    scanf("%d %d", &n1, &n2);

    if (n1 != n2)
    {
        printf("Jumlah Tidak Sama\n");
        return 0;
    }

    int vektor_a[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &vektor_a[i]);
    }
    
    int vektor_b[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &vektor_b[i]);
    }

    for(int i = 0; i < n1; i++){
        printf("%d ", vektor_a[i]*vektor_b[i]);
    }

    return 0;
}