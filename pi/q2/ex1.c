#include <stdio.h>
#include <listas.h>
/*Give a non-recursive definition of the function int length (LInt) which calculates the length of a
linked list.*/

int length(LInt l){
    int comp = 0;
    while(l != NULL){
        comp++;
        l = l -> prox;
    }
    return comp;
}

