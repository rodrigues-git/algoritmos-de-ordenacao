#include "header.h"

/* Complexidade: Melhor caso -> O(N)
                 pior e médio caso -> O(N^2)
*/

void insertion_sort(int* v, int n){
    for(int ii = n-1; ii >= 0; ii--){
        for(int jj = ii; jj < n-1 && v[jj] > v[jj + 1] ; jj++){
            troca(v,jj, jj+1);
        }
    }
} 

/* alternativamente: 
void insertion_sort(int* v, int n){
    for(int ii = 0; ii <= n-1; ii++){
        for(int jj = ii; jj > 0 && v[jj] < v[jj - 1]; jj--){
            troca(v,jj, jj-1);
        }
    }
} */


