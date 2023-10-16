#include <stdio.h>

int main() {
    double vetor1[5], vetor2[5];
    double produto_escalar = 0.0;

    printf("Digite 5 números reais para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", &vetor1[i]);
    }

    printf("Digite 5 números reais para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", &vetor2[i]);
    }

    for (int i = 0; i < 5; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }

    printf("Primeiro vetor: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetor1[i]);
    }
    printf("\n");

    printf("Segundo vetor: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", vetor2[i]);
    }
    printf("\n");

    printf("Produto escalar: %.2lf\n", produto_escalar);

    return 0;
}
