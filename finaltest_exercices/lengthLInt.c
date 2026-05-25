#include <stdio.h>

typedef struct slist {
    int valor;
    struct slist *prox;
} *LInt;

int length(LInt l){
    LInt aux = l;
    int comprimento = 0;
    while(aux != NULL){
        comprimento ++;
        aux = aux->prox;
    }
    return comprimento;
}