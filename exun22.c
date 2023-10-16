#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10], resultado[20];

    printf("vetor 1");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("vetor 2");
    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    
    for (int i = 0, j = 0; i < 10; i++) {
        resultado[j] = vetor1[i];
        resultado[j + 1] = vetor2[i];
        j += 2;
    }
   
    printf("Vetor Resultado:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", resultado[i]);
    }-
    printf("\n");

    return 0;
}
