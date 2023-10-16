#include <stdio.h>

int main() {
    float vetor[5];
    int codigo;

    for(int i = 0; i < 5; i++){
        for(int i = 0; i < 5; i++){
        printf("digite um numero real: ");
        scanf("%f", &vetor[i]);
    }
        printf("digite um numero inteiro: ");
        scanf("%d", &codigo);


        if(codigo == 1){
            for (int i = 0; i < 5; i++) {
            printf("\n%2.f", vetor[i]);
            }
        }
        else if(codigo == 2){
            for (int i = 4; i >= 0 ; i--) {
            printf("\n%2.f", vetor[i]);
            }
        }
        else if(codigo == 0){
            return 0;
        }
        else{
        }

        
    }
    

    
    return 0;
}
