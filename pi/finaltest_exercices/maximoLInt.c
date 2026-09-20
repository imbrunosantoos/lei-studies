#include <stdio.h>

typedef struct slist {
    int valor;
    struct slist *prox;
} *LInt;

int maximo(LInt l){
    LInt aux = l;
    int maior = aux->valor;

    while(aux != NULL){
        if (aux->valor > maior){
            maior = aux->valor;
        }
        aux = aux->prox;
    }
    return maior;
}