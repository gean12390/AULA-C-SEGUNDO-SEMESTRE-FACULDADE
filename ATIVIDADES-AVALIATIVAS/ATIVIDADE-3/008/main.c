//Giovanni Pascuotte da Silva
#include <stdio.h>

void exibirPares(int numero);

int main() {

    int numero;

    printf("Digite qualuquer numero: ");
    scanf("%d", &numero);

    exibirPares(numero);

    return 0;
}

void exibirPares(int numero){
    for(int i = 1; i <= numero; i++){
            if(i % 2 == 0){
                printf("%d \n", i);
            }
        }
}
