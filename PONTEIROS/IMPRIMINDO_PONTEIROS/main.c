#include <stdio.h>

int main(){
    char var1;
    int var2;
    double var3;

    char *ponteiro1;
    int *ponteiro2;
    double *ponteiro3;

    printf("tamanho %ld %ld %ld\n", sizeof(var1), sizeof(var2), sizeof(var3));
    printf("tamanho %ld %ld %ld\n", sizeof(ponteiro1), sizeof(ponteiro2), sizeof(ponteiro3));
    // %ld => 'long int' para imprimir longos numeros 

    return 0;
}
