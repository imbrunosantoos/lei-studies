#include <stdio.h>

//program that counts words

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main(){
    int c, state;
    int count = 0;

    state = OUT;

    while((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            ++count;
        }
    }
    printf( "%d", count);

    return 0;
}