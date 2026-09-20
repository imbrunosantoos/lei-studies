#include <stdio.h>
//change from fahr to celsius in a reverse way
int main(){
    float fahr;
    printf("Fahr\t Celsius\n");
    for(fahr=0; fahr<=300; fahr=fahr+20){
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}