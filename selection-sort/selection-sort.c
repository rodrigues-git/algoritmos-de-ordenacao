#include "header.h"
#include <stdio.h>

// complexidade: melhor caso, pior caso e caso médio -> O(N^2)

void selection_sort(int* v, int n){
    for(int ii = n-1; ii >= 0; ii--){
        int argmax = 0;
        for (int jj = 0; jj <= ii; jj++){
            if(v[jj] > v[argmax]){
                argmax = jj;
            }
        }
        troca(v, argmax, ii);
    }
} 

/* alternativamente: 
void selection_sort(int* v, int n){
    for(int ii = 0; ii <= n-1; ii++){
        int argmin = n-1;
        for (int jj = ii; jj <= n-1; jj++){
            if(v[jj] < v[argmin]){
                argmin = jj;
            }
        }
        troca(v, argmin, ii);
    }
} */

