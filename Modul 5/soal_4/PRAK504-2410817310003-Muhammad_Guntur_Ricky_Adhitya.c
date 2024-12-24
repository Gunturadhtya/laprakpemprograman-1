#include <stdio.h>

int reverse(int Bil){
    int reverse_num = 0;
    int temp = 0;
    for(int v = 10; v < Bil*10; v *= 10){
        reverse_num *= 10;
        reverse_num += ((Bil%v)-temp)/(v/10);
        temp = Bil%v;
    }
    return reverse_num;
}

int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}