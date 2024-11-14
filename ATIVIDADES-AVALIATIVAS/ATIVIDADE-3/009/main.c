//Giovanni Pascuotte da Silva
#include <stdio.h>

int multiplicarVetor(int vetor[], int j) {
    int resultado = 1;
    for (int i = 0; i < j; i++) {
        resultado *= vetor[i];
    }
    return resultado;
}

int main() {
    int j;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &j);

    if (j <= 0) {
        printf("O tamanho do vetor deve ser maior que zero.\n");
        return 1;
    }

    int vetor[j];

    printf("Digite os %d valores do vetor:\n", j);
    for (int i = 0; i < j; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int resultado = multiplicarVetor(vetor, j);
    printf("O resultado da multiplicação dos valores do vetor é: %d\n", resultado);

    return 0;
}
