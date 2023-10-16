#include <stdio.h>

int main() {
    int v[10], v1[10], v2[10];
    int cont1 = 0, cont2 = 0;

    for (int i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &v[i]);

        if (v[i] % 2 == 0) {
            v2[cont2] = v[i];
            cont2++;
        } else {
            v1[cont1] = v[i];
            cont1++;
        }
    }
    
    printf("Elementos UTILIZADOS de v1:\n");
    for (int i = 0; i < cont1; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("Elementos UTILIZADOS de v2:\n");
    for (int i = 0; i < cont2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}
