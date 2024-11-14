//Giovanni Pascuotte da Silva
#include <stdio.h>

void inverterNumeros(int n, int vetor[n]);

int main() {
    int n= 10; int vetor[n];

    for(int i = 1; i <= 10; i++){
            printf("Digite o valor da posicao numero %d: ", i);
            scanf("%d", &vetor[i]);
        }

    inverterNumeros(n, vetor);

    return 0;
}
    void inverterNumeros(int n, int vetor[n]){
        printf("O valores com a ordem inversa fica: \n");
        for(int i = 10; i >= 1; i--){
            printf("%d \n", i);
        }
}

