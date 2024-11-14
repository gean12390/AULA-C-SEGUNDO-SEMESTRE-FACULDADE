    //Giovanni Pascuotte

    //Define as bibliotecas usadas
#include <stdio.h>    //biblioteca principal  
#include <string.h>     //biblioteca para utilizar string 
#include <locale.h>     //biblioteca par utilizar o idioma em portugues

//cria uma struct para armazenar as variaveis utilizadas
typedef struct {       
    char modelo[50];   
    int ano;          
    double preco;     
} Carro;               

void modificarPreco(Carro *c, double novoPreco) { // Função para modificar o preço do carro
    c->preco = novoPreco;  
}

void imprimirCarro(Carro *c) { // Função para imprimir os dados do carro
    printf("Modelo: %s\n", c->modelo); 
    printf("Ano: %d\n", c->ano);        
    printf("Preço: R$ %.2f\n", c->preco); 
}

int main() { // Função principal onde a execução do programa começa
    setlocale(LC_ALL, "portuguese"); // Define a localização para português

    Carro carrol; // Declara uma variável 'carrol' do tipo Carro
    
    // Copia a string "xyz" para o campo modelo da estrutura 'carrol'
    strcpy(carrol.modelo, "xyz");
    carrol.ano = 2020; // Atribui o valor 2020 ao campo ano da estrutura 'carrol'
    carrol.preco = 90000.00; // Atribui o valor 90000.00 ao campo preço da estrutura 'carrol'.

    printf("Dados antes da modificação:\n"); // Exibe uma mensagem antes da modificação.
    imprimirCarro(&carrol); // Chama a função para imprimir os dados do carro 'carrol'.
    
    modificarPreco(&carrol, 115000.00); // Chama a função para modificar o preço do carro 'carrol' para 115000.00.

    printf("\nDados após a modificação do preço:\n"); // Exibe uma mensagem após a modificação do preço.
    imprimirCarro(&carrol); // Chama a função novamente para imprimir os dados do carro após a modificação.
    
    return 0; // Fim do programa
}
