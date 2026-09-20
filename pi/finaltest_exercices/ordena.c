#include <stdio.h>

typedef struct{
    int inf, sup;
}Intervalo;

void ordena(Intervalo c[], int N){
    for(int i = 0; i < N; i ++){
        for(int j = 1; j < N-1; j ++){
            if (c[j].inf <c[i].inf){
                Intervalo temp = c[j];
                c[j] = c [i];
                c[i] = temp;
            }
            else {
                
            }
        }
    }
}