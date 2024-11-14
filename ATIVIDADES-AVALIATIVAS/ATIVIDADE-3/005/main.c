//Giovanni Pascuotte da Silva
#include <stdio.h>

int exibirImparesSemMultiplosDeSete(int limite);

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    exibirImparesSemMultiplosDeSete(numero);

    return 0;
}

int exibirImparesSemMultiplosDeSete(int limite) {
    printf("Números ímpares de 1 até %d (exceto múltiplos de 7):\n", limite);
    for (int i = 1; i <= limite; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
