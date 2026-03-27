#include <stdio.h>

int main() {

    int minutos, dias, horas, resto;

    printf("Ingrese la cantidad de minutos: ");
    scanf("%d", &minutos);

    dias = minutos / 1440;
    resto = minutos % 1440;

    horas = resto / 60;
    resto = resto % 60;

    printf("-------------------Resultados----------------\n");
    printf("%d dias, %d horas, %d minutos\n", dias, horas, resto);

    return 0;
}
