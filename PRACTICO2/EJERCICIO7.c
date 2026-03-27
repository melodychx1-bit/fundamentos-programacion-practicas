
#include <stdio.h>
#include <math.h>

int main() {
    float C, T, M, G;
    int N;

    printf("Ingrese el capital inicial:");
    scanf("%f", &C);

    printf("Ingrese la tasa de interes: ");
    scanf("%f", &T);

    printf("Ingrese el numero de años: ");
    scanf("%d", &N);

    M = C * pow(1 + (T / 12 / 100), N * 12);

    G = M - C;

    printf("----------------------------\n");
    printf("Monto acumulado: %.2f\n", M);
    printf("Ganancia neta: %.2f\n", G);

    return 0;
}

