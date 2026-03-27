#include <stdio.h>

int main() {
    int d1, m1;
    int d2, m2;
    int total1, total2;
    int diferencia;
    int meses, dias;

    printf("Ingrese el dia inicial: ");
    scanf("%d", &d1);

    printf("Ingrese el mes inicial: ");
    scanf("%d", &m1);

    printf("Ingrese el dia final: ");
    scanf("%d", &d2);

    printf("Ingrese el mes final: ");
    scanf("%d", &m2);

    total1 = (m1 * 30) + d1;
    total2 = (m2 * 30) + d2;

    diferencia = total2 - total1;

    meses = diferencia / 30;
    dias = diferencia % 30;

    printf("-----------------------------\n");
    printf("Meses: %d\n", meses);
    printf("Dias: %d\n", dias);

    return 0;
}

