#include <stdio.h>

int main(){
    int input_1, input_2, input_3;
    scanf("%d %d %d", &input_1, &input_2, &input_3);

    int temp;
    if(input_1 > input_2){
        temp = input_1;
        input_1 = input_2;
        input_2 = temp;
    }

    if(input_2 > input_3){
        temp = input_2;
        input_2 = input_3;
        input_3 = temp;
    }

    if(input_1 > input_2){
        temp = input_1;
        input_1 = input_2;
        input_2 = temp;
    }

    printf("%d %d %d", input_1, input_2, input_3);
    return 0;
}