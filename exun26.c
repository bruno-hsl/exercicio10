#include <stdio.h>
#include <math.h>

int main() {
    double v[10];
    int n = 10;
    double soma = 0.0;
    double media;
    double desvio_padrao = 0.0;

    printf("Digite os 10 números do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%lf", &v[i]);
        soma += v[i];
    }

    media = soma / n;

    for (int i = 0; i < n; i++) {
        desvio_padrao += pow(v[i] - media, 2);
    }

    desvio_padrao = sqrt(desvio_padrao / (n - 1));

    printf("Média: %.2lf\n", media);
    printf("Desvio Padrão: %.2lf\n", desvio_padrao);

    return 0;
}
