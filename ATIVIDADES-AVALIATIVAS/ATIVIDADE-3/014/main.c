//Giovanni Pascuotte da Silva
#include <stdio.h>

int calcularResultado(int soma, int vetor[], int ps1, int ps10);

int main() {
    int vetor[10]; int soma; int ps1 = 1; int ps10 = 10;

    for(int i = 1; i <= 10 ; i++){
            printf("Valor de numero %d: ", i);
            scanf("%d", &vetor[i]);
            soma += vetor[i];
        }

    printf("O resultado e igual a: %d \n", calcularResultado(soma, vetor, ps1, ps10));

    return 0;
}

int calcularResultado(int soma, int vetor[], int ps1, int ps10){

     vetor[ps1];
     vetor[ps10];

    int resultado = soma + (vetor[ps1] * 5) + (vetor[ps10] * 2);

    return resultado;
}