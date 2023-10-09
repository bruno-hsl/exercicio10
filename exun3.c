#include <stdio.h>

int main() {
    int vetor[5], codigo;

    for(int i = 0; i < 5; i++){
        for(int i = 0; i < 5; i++){
        printf("digite um numero real: ");
        scanf("%d", &vetor[i]);
    }
        printf("digite um numero inteiro: ");
        scanf("%d", &codigo);

        for (int i = 0; i < 5; i++) {
        if(codigo == 1){
            printf("\n%d", vetor[i]);
        }
        
    }
    }

    
    return 0;
}
