#include <stdio.h>

int max(int a, int b){
    return a > b ? a : b;
}

int MaxBilangan(int a, int b, int c, int d){
    int arr[] = {b, c, d};
    int max_num = a;
    for(int i = 0; i < 3; ++i){
        max_num = max(max_num, arr[i]);
    }
    return max_num;
}

int main(){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);

    printf("%d", hasil);

    return 0;
}