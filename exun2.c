#include <stdio.h>

int main() {
    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                for(int k = j; k < 9; k++){
                    vetor[k] = vetor[k + 1];
                }
                vetor[4] = 0;
            }
        }
    }

    
    for(int i = 0; i < 10; i++){
        if(vetor[i] != 0){
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
