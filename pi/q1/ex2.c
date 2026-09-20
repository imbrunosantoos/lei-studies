#include <stdio.h>

/*Define a program that reads (using the scanf function) a sequence of integers ending with the number
0 and prints the average of the sequence on the screen*/

int main() {
    int numero, soma = 0, contador = 0;

    printf("Digite uma sequencia de numeros inteiros (termine com 0):\n");

    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }

        soma += numero;   
        contador++;        
    }
    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A media da sequencia e: %.2f\n", media);
    } else {
        printf("erro\n");
    }

    return 0;
}