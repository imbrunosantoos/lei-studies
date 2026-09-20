#include <stdio.h>
#include <listas.h>

/*Give a non-recursive definition of the function void imprimeL (LInt) which prints the elements of a
list (one per line) on the screen.*/

void imprimeL(LInt l){
    while(l != NULL){
        printf("%d\n", l->valor);
        l = l->prox;
    }
} 