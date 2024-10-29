#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

    struct pedido{
        int carrinho;
        int quantidade;
        int total_itens; 
        float total;
        bool repeticao;
        int prudotos[];
    };

    int produtos(int produto_1, int produto_2, int produto_3);

    void forma_pagamento(int pagamento);
    

int main(){

    struct pedido pedido1;

    int pagamento;
    pedido1.repeticao = true;
    pedido1.quantidade = 0;
    pedido1.total_itens = 0;
    pedido1.total = 0;
    pedido1.prudotos[0] = 0;
    pedido1.prudotos[1] = 0;
    pedido1.prudotos[2] = 0;
    int produto_1 = pedido1.prudotos[0];
    int produto_2 = pedido1.prudotos[1];
    int produto_3 = pedido1.prudotos[2];


    while (pedido1.repeticao)
    {
        printf("----------------------------------------------------");

        printf("\n Tela de Pedido:\n");

        printf("Escolha o produto para por no carrinho: \n");

        printf("*OBS: (precione o numero correspondente a do produto) \n\n");

        printf(" 1. WHEY GROWTH 1KG SABOR CHOCOLATE R$189.99 \n 2. CREATINA CONCENTRADA 250G  MAX TITANIUM R$190.00 \n 3. WHEY MAX TITANIUM 1KG SABOR MORANGO R$253.90 ");
        printf("\n 0. FINALIZAR COMPRA \n");
        printf("----------------------------------------------------\n");
        printf("Seu carrinho: %d itens \n", pedido1.total_itens);
        printf("----------------------------------------------------\n");

        scanf("%d", &pedido1.carrinho);
        if (pedido1.carrinho == 0)
        {
           pedido1.repeticao = false;
            break;
        } else if(pedido1.carrinho >= 4){
            printf("Produto Nao Encontrado, ");
            system("pause");
            system("cls");
            continue;
        }
        printf("Quantidade: ");
        scanf("%d", &pedido1.quantidade);
        system("cls");
        pedido1.total_itens += pedido1.quantidade;

        switch (pedido1.carrinho){
            case 1:
                pedido1.total +=  pedido1.quantidade * 189.99;
                pedido1.prudotos[0] += pedido1.quantidade;
                break;
        
            case 2: 
                pedido1.total +=  pedido1.quantidade * 190.00;
                pedido1.prudotos[1] += pedido1.quantidade;
                break;

            case 3: 
                pedido1.total +=  pedido1.quantidade * 253.90;
                  pedido1.prudotos[2] += pedido1.quantidade;
                break;
            default:
                break;
        }
    }
    if (pedido1.total == 0){
        return 0;
    }

    printf("----------------------------------------------------\n");
         produtos(produto_1, produto_2, produto_3);
    printf("____________________________________________________\n");
    printf("Total a pagar: R$%.2f \n", pedido1.total);

    printf("----------------------------------------------------\n");
    printf("Forma de pagamento:\n 1. Cartao de Debito\n 2. Cartao de Credito\n 3. Pix\n");

    scanf("%d", &pagamento);
    forma_pagamento(pagamento);
    system("pause");
    return 0;
}

    int produtos(int produto_1, int produto_2, int produto_3){
        if (produto_1 >= 1){
            printf(" %dX WHEY GROWTH 1KG SABOR CHOCOLATE \n", produto_1);
        } if(produto_2 >= 1){
            printf(" %dX CREATINA CONCENTRADA 250G  MAX TITANIUM\n", produto_2);
        } if(produto_3 >= 1){
            printf(" %dX WHEY MAX TITANIUM 1KG SABOR MORANGO\n", produto_3);
        }
        
    }

    void forma_pagamento(int pagamento){
        int x; char j; char str[33]; int i;

        srand(time(NULL));

                     for(i = 0; i < 32; i++) {
                         int r = rand() % 62;
                         str[i] = r < 26 ? 'A' + r : (r < 52 ? 'a' + r - 26 : '0' + r - 52);
                     }  
                     str[32] = '\0';

        if(pagamento == 1){
            printf("----------------------------------------------------\n");
            printf("Insira o Numero do cartao: ");
            scanf("%d", &x);

            printf("Insira a data de Validade: ");
            scanf("%d", &x);

            printf("Insira o Nome do titular: ");
            scanf("%s", &j);

            system("cls");

            printf("pedido realizado com sucesso!!\n\n");

            printf("Segue abaixo o numero do pedido para rastreio: \n");
            printf("%s\n\n", str);

            printf("MUITO OBRIGADO POR COMPRAR COM A GENTE, A ALPHACORE AGRADECE A SUA COMPRA\n\n");


          } else if(pagamento == 2){
            printf("----------------------------------------------------\n");
            printf("Insira o Numero do cartao: ");
            scanf("%d", &x);

            printf("Insira a data de Validade: ");
            scanf("%d", &x);

            printf("Insira o Nome do titular: ");
            scanf("%s", &j);

             system("cls");

            printf("pedido realizado com sucesso!!\n\n");

            printf("Segue abaixo o numero do pedido para rastreio: \n");
            printf("%s\n\n", str);

            printf("MUITO OBRIGADO POR COMPRAR COM A GENTE, A ALPHACORE AGRADECE A SUA COMPRA\n\n");

          } else if(pagamento == 3){
            printf("----------------------------------------------------\n");
            printf("\n\nCopie o Codigo PIX gerado abaixo e cole no seu aplicativo do seu banco:\n");
                    printf("%s\n\n", str);
                    system("pause");
                    system("cls");
            printf("\nMUITO OBRIGADO POR COMPRAR COM A GENTE, A ALPHACORE AGRADECE A SUA COMPRA\n\n");
            printf("Segue abaixo o numero do pedido para rastreio: \n");
            printf("%s\n\n", str);
          }
    }