/*Define a função int pesquisa(int x, int a[], int N) 
que dado um array a ordenado de tamanho N, devolve o índice onde está o elemento x. Se x não existir devolve -1.*/

int pesquisa(int x, int a[], int N){

    int indiceX = 0;

    for (int i = 0; i < N; i++){
        if (a[i] == x){
            indiceX = i;
            return indiceX;
        }
    }
    return -1;
}