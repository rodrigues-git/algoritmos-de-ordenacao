#include <stdio.h>
#include "header.h"
#include <stdlib.h>

int main(){

    int n;

    printf("Digite quantos elementos a lista tem: ");
    scanf("%d", &n);

    int v[n];

    printf("Digite os elementos da lista em ordem:\n");

    for(int ii = 0; ii < n; ii++){
        printf("V[%d] = ", ii+1);
        scanf("%d", &v[ii]);
    }

    int* ptr = v;
    
    insertion_sort(ptr, n);

    printar(ptr, n);

    system("pause");

    return 0;
}