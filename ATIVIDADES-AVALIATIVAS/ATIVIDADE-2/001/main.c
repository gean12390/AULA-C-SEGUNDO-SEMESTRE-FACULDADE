// GIOVANNI PASCUOTTE DA SILVA
// EXERCICIO 6 -- LISTA 
#include <stdio.h>

int maior_numero(int a, int b);

int main() {

    printf("\nGIOVANNI PASCUOTTE DA SILVA \n");

    int a;
    int b;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &a);
    printf("Digite o segundo numero: \n");
    scanf("%d", &b);

    printf("O maior numero é: %d\n", maior_numero(a,b));

    return 0;
}

int maior_numero(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
