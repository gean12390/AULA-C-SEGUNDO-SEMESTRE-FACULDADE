//Giovanni Pascuotte da Silva
#include <stdio.h>

int menorNumero(int num1, int num2, int num3);

int main() {

    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("%d \n", menorNumero(num1, num2, num3));

    return 0;
}

int menorNumero(int num1, int num2, int num3){
    if(num1 < num2 && num1 < num3){
        return num1;
    } else if(num2 < num1 && num2 < num3){
        return num2;
    } else if(num3 < num1 && num3 < num2){
        return num3;
    }
}