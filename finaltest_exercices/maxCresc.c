/*Define a função int maxCresc(int v[], int N)
 que calcula o comprimento da maior sequência crescente de elementos consecutivos num array.*/

 int maxCresc(int v[], int N){
    int sequencia = 1;
    int maiorSequencia = 1;
    int valorAtual = v[0];

    for(int i = 1; i < N; i ++){
        if (v[i] > v[i - 1]){
            sequencia++;
            if (sequencia > maiorSequencia){
                maiorSequencia = sequencia;
            }
        }
        else {
            sequencia = 1;
        }
    }
    return maiorSequencia;
 }