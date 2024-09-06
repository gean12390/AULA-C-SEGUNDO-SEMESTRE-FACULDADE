#include <stdio.h>

    void imprimeMensagem(char mensagem[]);

int main(){
    imprimeMensagem("Olá mundo");

    return 0;
}
    void imprimeMensagem(char mensagem[]){
        printf("%s \n" , mensagem);
    }
