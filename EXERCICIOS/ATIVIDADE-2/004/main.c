// GIOVANNI PASCUOTTE DA SILVA
// EXERCICIO 4 -- LISTA
#include <stdio.h>

int calcular(int n, int resul, int array[n]);

int main() {

    printf("\nGIOVANNI PASCUOTTE DA SILVA \n");
    int n;
    int resul;
    printf("DIgite um numero: ");
    scanf("%d", &n);
    int array[n];

    calcular(n, resul, array);

    return 0;
}

int calcular(int n, int resul, int array[n]){
        for(int i = 1; i <= n; i++){
        array[i] =(5*(i*i)+2*i+8);
            resul += array[i];

        }

        printf("\nResultado= %d\n", resul);
}
