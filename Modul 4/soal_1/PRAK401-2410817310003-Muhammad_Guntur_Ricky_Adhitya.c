#include <stdio.h>

int main(){
    int multiplication_of;
    char symbol;
    scanf("%d %c", &multiplication_of, &symbol);

    for(int i = 1; i <= 50; ++i){
        if((i%multiplication_of) == 0){
            printf("%c ", symbol);
        }else{
            printf("%d ", i);
        }
    }
    return 0;
}