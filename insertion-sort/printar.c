#include <stdio.h>

void printar(int* v, int n){
    printf("Lista ordenada:\n");
    for(int ii = 0; ii < n; ii++){
        printf("%d \n", v[ii]);
    }
}