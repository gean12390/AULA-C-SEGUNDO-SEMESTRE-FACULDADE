#include <stdio.h>

int main(){

    int i = 0;
    int j = 0;
    int n = 0;

    printf("Digite o primeiro numero");
    scanf("%d", &n);
    int matriz[n][n];

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            matriz[i][0] = 0;

            if(i >=1){
                matriz[i][j]=j;
            } else {   
                matriz[i][j]=0;
            } 

        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
                printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}