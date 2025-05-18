
// complexidade O(N)
int ordenada(int* v, int n){
    for(int ii = 0; ii < (n-1); ii++){
        if (v[ii + 1] < v[ii]){
            return 0; // retorna falso
        }
    }
    return 1; // retorna true
}