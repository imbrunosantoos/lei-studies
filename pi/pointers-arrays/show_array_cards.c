#include <stdio.h>

typedef struct{
    int value;
    int suit;      
} Card;

void imprimir_mao(Card *mao, int tamanho){
    int i;
    for(i = 0 ;i < tamanho;i++){
        printf("a carta %d tem o valor de %d e o naipe %d\n", i+1, mao[i].value, mao[i].suit);

    }
}

int main(){
    Card minha_mao[5];

    minha_mao[0].value = 10;
    minha_mao[0].suit = 2;

    minha_mao[1].value = 4;
    minha_mao[1].suit = 1;

    imprimir_mao(minha_mao, 2);
    
    return 0;
}