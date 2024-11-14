//Giovanni Pascuotte da Silva
#include <stdio.h>

void encontrarMaior(int vetor[], int tamanho, int *maior, int *posicao) {
    *maior = vetor[0];
    *posicao = 0;

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
            *posicao = i;
        }
    }
}

int main() {
    int j = 10;
    int vetor[j];
    int n;

    printf("Digite o número de elementos do vetor (máximo %d): ", j);
    scanf("%d", &n);

    if (n <= 0 || n > j) {
        printf("Número inválido de elementos.\n");
        return 1;
    }

    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior, posicao;
    encontrarMaior(vetor, n, &maior, &posicao);
    printf("O maior valor é %d e está na posição %d.\n", maior, posicao);

    return 0;
}
