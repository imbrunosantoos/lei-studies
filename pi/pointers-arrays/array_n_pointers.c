#include <stdio.h>

typedef struct{
    int value;
    int suit;      
} Card;

int main(){
    Card minha_mao[5];

    minha_mao[0].value = 10;
    minha_mao[0].suit = 2;

    minha_mao[1].value = 4;
    minha_mao[1].suit = 1;

    printf("carta da posicao 0 tem o valor %d e o naipe %d\n", minha_mao[0].value, minha_mao[0].suit);
    printf("carta da posicao 1 tem o valor %d e o naipe %d\n", minha_mao[1].value, minha_mao[1].suit);

    return 0;
}