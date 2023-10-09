#include <stdio.h>

int main() {
    int vetor[5], x;

    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    for (int i = 0; i < 5; i++) {
        int multi = x * vetor[i];
        printf("%d * %d = %d\n", x, vetor[i], multi);
    }

    return 0;
}
