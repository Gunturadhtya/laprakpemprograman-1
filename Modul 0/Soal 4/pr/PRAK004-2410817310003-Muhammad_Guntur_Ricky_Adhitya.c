#include <stdio.h>
#include <string.h>

const int ROW = 35;
const int COLLUMN = 6;

int main(){
    char nama[] = "Muhammad Guntur Ricky Adhitya";
    char nim[] = "2410817310003";
    int row = ROW;
    int collumn = COLLUMN;


    for(int i = 0; i < collumn; i++){
        
        for(int j = 0; j < row; j++){
            if (i == 0  || i+1 == collumn)
            {
                printf("#");
            }
            else if (j == 0 || j+1 == row)
            {
                
                printf("#");
            }
            else{
                if(i == ((collumn/2)-1) & j == ((row-strlen(nama))/2)){
                    printf("%s", nama);
                    row = row - strlen(nama);
                }
                if(i == ((collumn/2)) & j == ((row-strlen(nim))/2)){ 
                    printf("%s", nim);
                    row = row - strlen(nim);
                }
                printf(" ");
            }
            
        }
        row = ROW;
        printf("\n");
    }
    getchar();
    return 0;
}