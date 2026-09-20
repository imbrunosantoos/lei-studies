#include <stdio.h>

typedef struct{
    int inf, sup;
}Intervalo;

int cardinalidade (Intervalo c[], int N) {
    int total = 0;
    int inicio = c[0].inf;   // início do intervalo atual
    int fim = c[0].sup;      // fim do intervalo atual

    for (int i = 1; i < N; i++) {
        if (c[i].inf <= fim) {          // sobrepõe-se ao atual
            if (c[i].sup > fim) {       // mas estende para além
                fim = c[i].sup;         // expande o fim
            }
        } else {                        // não se sobrepõe
            total += fim - inicio + 1;  // conta o intervalo atual
            inicio = c[i].inf;          // começa um novo
            fim = c[i].sup;
        }
    }
    total += fim - inicio + 1;          // conta o último intervalo
    return total;
}