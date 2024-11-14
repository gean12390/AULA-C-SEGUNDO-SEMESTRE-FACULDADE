//Giovanni Pascuotte da Silva
#include <stdio.h>

int somaresul(int n, int vetor[], int media);

int main() {
    int n;
    int media;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int vetor[n];

    int soma = somaresul(n, vetor, media);

    return 0;
}

int somaresul(int n, int vetor[], int media) {
    int soma = 0;

    for(int i = 1; i <= n; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma/n;

    printf("A soma dos elementos é: %d\n", soma);
    printf("A soma dos elementos é: %d\n", media);

}
