#include <stdio.h>

// Giovanni Pascuotte

//Define um struct para armazenar as variaveis
typedef struct {
    double peso;
    int idade;
    double altura;
} Pessoa;

// Função para exibir os dados de uma pessoa
void exibePessoa(Pessoa p) {
    printf("Peso: %.2lf kg | Idade: %d anos | Altura: %.2lf m\n", p.peso, p.idade, p.altura);
}

// Função para capturar os dados de uma pessoa a partir da entrada do usuário
void capturaPessoa(Pessoa *p) {
    printf("Informe o peso (kg): ");
    scanf("%lf", &p->peso);
    printf("Informe a idade (anos): ");
    scanf("%d", &p->idade);
    printf("Informe a altura (m): ");
    scanf("%lf", &p->altura);
}

int main() {
    Pessoa grupo[5];

    // Coleta os dados de 5 pessoas
    for (int i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        capturaPessoa(&grupo[i]);
    }

    // Exibe os dados coletados de cada pessoa
    for (int i = 0; i < 5; i++) {
        printf("\nInformações da pessoa %d:\n", i + 1);
        exibePessoa(grupo[i]);
    }

    return 0;
}
