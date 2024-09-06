#include <stdio.h>

int soma(int a, int b);
int main(){

    int a,b;
    
    scanf("%d %d", &a, &b);


    soma(a, b);

    printf("%d \n", soma(a, b));
    return 0;
}
int soma(int a, int b){
    
    return a + b;
}
