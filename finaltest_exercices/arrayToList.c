#include <stdio.h>

typedef struct slist {
    int valor;
    struct slist *prox;
} *LInt;

LInt arrayToList(int v[], int N){
    int x = 0;
    LInt lista = NULL;

    for(int i = N - 1; i >= 0; i --){
        x = v[i];
        lista = newLInt(x, lista);
    }
    return lista;
}