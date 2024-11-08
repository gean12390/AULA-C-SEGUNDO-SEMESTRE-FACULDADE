#include <stdio.h>

int main(){
    
int v[10],i,j, num;

for(i = 0; i < 10; i++){
    printf("Digite um numero: ");
    scanf("%d", &v[i]);
    
}

   for(i = 0; i < 10; i++) { 
        if(v[i] > v[num]) {
            num = i; 
        }
   }
    
    
printf(" \n Maior numero %d\n\n", v[num]);

for(i = 0; i < 10; i++){
    if(v[i] % 2 == 0){
        printf("%d \n", v[i]);
    }
}
    return 0;
}
