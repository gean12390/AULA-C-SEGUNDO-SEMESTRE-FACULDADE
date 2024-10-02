#include <stdio.h>

int main(){
    int num, n1, n2, n3, n4 = 800;
    printf("Endereço do num=%d eh %p\n", num, &num); // o & significa para pegar o endereço da variavel e %p aponta o ponteiro em caracteres 
    printf("Endereço do num=%d eh %p\n", n1, &n1); //(pode usar o %x para valores hexadecimais)
    printf("Endereço do num=%d eh %p\n", n2, &n3);
    printf("Endereço do num=%d eh %p\n", n2, &n2);
    

    return 0;
}
