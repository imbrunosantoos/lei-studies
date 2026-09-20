#include <stdio.h>

// program that turns 2 or more blanks into a single one
int main(){
    int charac;
    int last_char = 0;
    while(charac = (getchar())!= EOF){
        if(charac ==  ' '){
            if (last_char != ' '){
                putchar(charac);
            }
        }
        else{
            putchar(charac);
        }
        last_char = charac;
    }
    return 0;

}