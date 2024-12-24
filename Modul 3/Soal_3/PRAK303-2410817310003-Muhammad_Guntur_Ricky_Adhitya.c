#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    if(N == 0){
        printf("nol");
    }else if (N > 0)
    {
        printf("positif");
    }else{
        printf("negatif");
    }
    

    return 0;
}