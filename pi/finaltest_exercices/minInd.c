#include <stdio.h>

int minInd(int v[], int n){
    int minValor = v[0];
    int minIndice = 0;
    for( int i = 0; i < n; i ++){
        if (v[i] < minValor){
            minValor = v[i];
            minIndice = i;
        }
    }
    return minIndice;
}
