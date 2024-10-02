#include <stdio.h>

int main(){
    int num = 507;
    int *pt1;
    pt1 = &num;

    char *ponteiro1;
    int *ponteiro2;
    double *ponteiro3;

    printf("tamanho %d %p %p %p\n", num, &num, pt1, &pt1);
    // %ld => 'long int' para imprimir longos numeros 

    return 0;
}