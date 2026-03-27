#include <stdio.h>
#include <math.h>

int main() {
    float C, T, cuota, montototal, interestotal;
    int N;

    printf("Ingrese el capital prestado: ");
    scanf("%f", &C);

    printf("Ingrese la tasa de interes mensual: ");
    scanf("%f", &T);

    printf("Ingrese el numero de cuotas: ");
    scanf("%d", &N);

    cuota = C * (T * pow(1 + T, N)) / (pow(1 + T, N) - 1);

    montototal = cuota * N;
    interestotal = montototal - C;

    printf("------------RESULTADOS-----------\n");
    printf("Cuota mensual: %.2f\n", cuota);
    printf("Monto total a pagar: %.2f\n", montototal);
    printf("Interes total: %.2f\n", interestotal);

    return 0;
}
