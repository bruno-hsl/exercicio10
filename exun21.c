#include <stdio.h>

int main() {
    int A[10], B[10], C[10];

    printf("Digite os valores de A:\n");
    for (int i = 0; i < 10; i++) {
       printf("digite um numero: ");
       scanf("%d", &A[i]);
    }

    printf("Digite os valores de B:\n");
    for (int i = 0; i < 10; i++) {
       printf("digite um numero: ");
       scanf("%d", &B[i]);
    }

    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
       printf("\n%d", C[i]);
    }
    
 

    return 0;
}
