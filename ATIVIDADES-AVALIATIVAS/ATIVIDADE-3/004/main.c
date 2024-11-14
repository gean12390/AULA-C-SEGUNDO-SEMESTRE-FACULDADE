//Giovanni Pascuotte da Silva
#include <stdio.h>

float calcular(float n_1, float n_2, float n_3, float n_4);

int main() {

    float n_1, n_2, n_3, n_4;

    printf("Digite a primeira nota: ");
    scanf("%f", &n_1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n_2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n_3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n_4);

    if(calcular(n_1, n_2, n_3, n_4) >= 7){
        printf("%.2f \n", calcular(n_1, n_2, n_3, n_4));
        printf("Aluno aprovado \n");
      } else{        
        printf("%.2f \n", calcular(n_1, n_2, n_3, n_4));
        printf("Aluno reprovado \n");
        }

    return 0;
}

float calcular(float n_1, float n_2, float n_3, float n_4){
    return (n_1+ n_2+ n_3+ n_4)/4;
}


