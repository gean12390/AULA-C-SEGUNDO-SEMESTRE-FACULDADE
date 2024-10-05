// GIOVANNI PASCUOTTE DA SILVA
// EXERCICIO 7 -- LISTA
#include <stdio.h>

int calcular(int array[2]);

int main() {

    printf("\nGIOVANNI PASCUOTTE DA SILVA \n");
    
    int array[2];

    printf("Digite o primeiro numero: ");
    scanf("%d", &array[0]);
    printf("Digite o segundo numero: ");
    scanf("%d", &array[1]);
    printf("Digite o terceiro numero: ");
    scanf("%d", &array[2]);

    printf("\n a soma de %d + %d + %d da o resultado de: %d \n", array[0], array[1], array[2], calcular(array));

    return 0;
}

int calcular(int array[2]){
    int resul = array[0] + array[1] + array[2];

    return resul;
}
