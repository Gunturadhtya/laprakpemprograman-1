#include <stdio.h>

int main(){
    int num_1, num_2;
    scanf("%d %d", &num_1, &num_2);

    int state = num_1 > num_2 ? 1 : 0;
    int compare_ii = state ? (num_2-1) : (num_2+1);
    int compare_jj = state ? (num_1+1) : (num_1-1);

    for(int i = num_1, j = num_2; 1; state ? ++j && --i : --j && ++i){
        if(i == j || state ? i < j : i > j){
            printf("%d %d", i, j);
            for(int ii = state ? i-1: i+1, jj = state ? j+1: j-1; (ii != compare_ii) && (jj != compare_jj) ; state ? ++jj && --ii : --jj && ++ii){
                printf(" - %d %d", ii, jj);
            }
            break;
        }else{
            printf("%d %d - ", i, j);
        }
    }
}