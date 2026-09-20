/*Define a função int retiraNeg(int v[], int N) que recebe um array v com N inteiros e 
remove todos os números negativos do array.
A função deve devolver quantos elementos sobraram (os não-negativos).*/
int retiraNeg(int v[], int N){
    int naoNegativos = 0;
    
    for( int i = 0; i < N; i++){
        
        if (v[i] < 0){
            
        }
        else{
            v[naoNegativos] = v[i];
            naoNegativos ++;
        }
    }
    return naoNegativos;
}