#include <stdio.h>

int main() {
    float C, F, K, Ra;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &C);

    F = (C * 9 / 5) + 32;
    K = C + 273.15;
    Ra = (C + 273.15) * 9 / 5;

    printf("-----------RESULTADOS-----------\n");
    printf("Celsius: %.2f\n", C);
    printf("Fahrenheit: %.2f\n", F);
    printf("Kelvin: %.2f\n", K);
    printf("Rankine: %.2f\n", Ra);

    return 0;
}
