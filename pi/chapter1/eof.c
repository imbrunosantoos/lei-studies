#include <stdio.h>
//the output of EOF
int main(){ 
    int c;
    c = getchar() != EOF;
    printf("%d", c);
    return 0;
}