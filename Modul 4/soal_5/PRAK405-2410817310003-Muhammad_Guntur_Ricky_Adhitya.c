#include <stdio.h>

int main(){

    int inp_1;
    int inp_2;
    scanf("%d %d", &inp_1, &inp_2);

    int sum = 0;
    for(int i = 0; i < inp_1; ++i){
        int sum_row = 0;
        for(int j = i+1; j >= 1; --j){
            sum_row += j * inp_2;
            printf("(%d * %d)%s", j, inp_2, (j == 1) ? " " : " + ");
        }
        printf("= %d\n", sum_row);
        sum += sum_row;
    }
    printf("%d\n", sum);
    return 0;
}