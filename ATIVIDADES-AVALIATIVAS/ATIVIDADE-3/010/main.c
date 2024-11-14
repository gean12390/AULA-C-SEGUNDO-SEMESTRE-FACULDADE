//Giovanni Pascuotte da Silva
#include <stdio.h>

void maiorNumero(int num1, int num2);

int main() {

    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    maiorNumero(num1, num2);

    return 0;
}

void maiorNumero(int num1, int num2){
    if(num1 > num2){
        printf("%d e maior \n", num1);
      } else if(num2 > num1){
        printf("%d e maior \n", num2);
      } else if(num1 == num2){
        printf("os numeros sao iguais \n");
      }
      
}