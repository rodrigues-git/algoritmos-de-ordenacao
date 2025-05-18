#include "header.h"

// complexidade: pior caso e caso médio -> O(N^2)
//               melhor caso -> O(N)
void bubble_sort(int* v, int n){
    int conflito;
    do{
        conflito = 0;
        for(int ii = 0; ii < n-1; ii++){
            if(v[ii] > v[ii+1]){
                troca(v, ii, ii+1);
                conflito = 1;
            }
        }
    }while(conflito == 1);
}