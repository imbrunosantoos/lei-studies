#include <stdio.h>

typedef struct slist {
    int valor;
    struct slist *prox;
} *LInt;

int listToArray(LInt l, int v[], int N){
    LInt aux = l;
    int preenchidos = 0, i = 0;
    while (aux != NULL && i < N){
        v[i] = aux->valor;
        aux = aux->prox;
        i++;
        }
        return i;
    }

