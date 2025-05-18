#include <stdio.h>
#include <stdlib.h>

int ordenada(int* v, int n){
    for(int ii = 0; ii < (n-1); ii++){
        if (v[ii + 1] < v[ii]){
            return 0; // retorna falso
        }
    }
    return 1; // retorna true
}

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
    int resul = 0;

    resul = ordenada(ptr, n);

    if(resul){
        printf("A lista esta ordenada! \n");
    }

    else{
        printf("A lista esta desordenada! \n");
    }

    system("pause");

    return 0;
}