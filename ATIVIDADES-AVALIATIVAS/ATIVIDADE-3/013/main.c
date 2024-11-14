//Giovanni Pascuotte da Silva
#include <stdio.h>

float calcularMedia(int num1, int num2, int num3);

int main() {

 int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

     calcularMedia(num1, num2, num3);

    return 0;
}

float calcularMedia(int num1, int num2, int num3){
    float media = (num1 + num2 + num3)/3;

    printf("%.2f \n", media);
}
