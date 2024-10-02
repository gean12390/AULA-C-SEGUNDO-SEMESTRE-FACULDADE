#include <stdio.h>

struct s_teste {
    int p;
};

// Inicialização de uma variável global da struct
struct s_teste teste = { 5 };

int main() {
    printf("\n %d \n", teste.p); // Acessa o membro da struct

    return 0;
}
