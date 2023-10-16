#include <stdio.h>

int main() {
    int vetor[5], x[5];

    for (int i = 0 + 1; i < 5; i++) {
        x[i] = ((i + 5 * i) % (i + 1));
        printf("\n%d", x[i]);
        
    }

    
    return 0;
}
