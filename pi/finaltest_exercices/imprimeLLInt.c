#include <stdio.h>

typedef struct slist {
    int valor;
    struct slist *prox;
} *LInt;

void imprimeL(LInt l){
    LInt aux = l;

    while(aux != NULL){
        printf("%d\n", aux->valor);
        aux = aux->prox;
    }

}