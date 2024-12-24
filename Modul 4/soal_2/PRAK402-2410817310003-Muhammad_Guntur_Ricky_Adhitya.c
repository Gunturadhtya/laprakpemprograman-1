#include <stdio.h>

int main(){ 
    int num;
    scanf("%d", &num);

    for(int i = 1; i <= num; ++i){
        if((i%2) != 0){
            printf("%d ", i);
        }
    }
    printf("\n");

    for(int i = num; i >= 1; --i){
        if((i%2) == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}