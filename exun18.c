#include <stdio.h>

int main() {
    int vetor[10];
    int x;
    int contador = 0;

    printf("Digite 10 números:\n");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite um número x: ");
    scanf("%d", &x);

    printf("Múltiplos de %d no vetor:\n", x);
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % x == 0) {
            printf("%d ", vetor[i]);
            contador++;
        }
    }

    if (contador == 0) {
        printf("Nenhum múltiplo de %d foi encontrado no vetor.\n", x);
    }

    return 0;
}
