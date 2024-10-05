// GIOVANNI PASCUOTTE DA SILVA
// EXERCICIO 5 -- LISTA
#include <stdio.h>

int soma_num(int a, int b);

int main() {

    printf("\nGIOVANNI PASCUOTTE DA SILVA \n");
    int a, b;

    printf("Digite 2 Numeros\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("\nA soma dos numeros e igual a %d\n", soma_num(a, b));

    return 0;
}

int soma_num(int a, int b){
    return a + b;
}
