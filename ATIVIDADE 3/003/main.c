    //Giovanni Pascuotte

#include <stdio.h> // Biblioteca principal

// Declara a função calcularResultado que soma os elementos de um array
int calcularResultado(int v[], int n);

int main() {
    int vetor[5], i, resultado; // Declara o vetor, contador e resultado

    // Preenche o vetor com valores: 0, 2, 4, 6, 8
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;
    }

    // Chama a função e armazena o resultado
    resultado = calcularResultado(vetor, 5);
    
    // Imprime o resultado
    printf("O resultado é: %d\n", resultado);
    return 0; // Termina o programa
}

// Função que calcula a soma dos elementos do array
int calcularResultado(int v[], int n) {
    int i, soma = 0; // Contador e soma inicializada em 0

    // Soma todos os elementos do array
    for (i = 0; i < n; i++) {
        soma += v[i];
    }

    return soma; // Retorna a soma total
}
