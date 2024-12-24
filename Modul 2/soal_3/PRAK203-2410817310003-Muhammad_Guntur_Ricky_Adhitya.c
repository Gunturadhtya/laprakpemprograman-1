#include <stdio.h>

int main(){
    float a = 0;
    float b = 0;
    float i = 0; 
    float j = 0;
    float x = 0;
    float y = 0;

    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    float result = (((a - b) * i) / j) - (x + y);
    printf("%.3f", result);

    return 0;
}