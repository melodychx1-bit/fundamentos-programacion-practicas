#include <stdio.h>

int main() {
    int dia, mes;

    printf("Ingrese el dia: ");
    scanf("%d", &dia);

    printf("Ingrese el mes: ");
    scanf("%d", &mes);

    if ((mes == 3 && dia >= 21) || (mes > 3 && mes < 6) || (mes == 6 && dia < 21)) {
        printf("Estacion: Otoño\n");
    }
    else if ((mes == 6 && dia >= 21) || (mes > 6 && mes < 9) || (mes == 9 && dia < 21)) {
        printf("Estacion: Invierno\n");
    }
    else if ((mes == 9 && dia >= 21) || (mes > 9 && mes < 12) || (mes == 12 && dia < 21)) {
        printf("Estacion: Primavera\n");
    }
    else {
        printf("Estacion: Verano\n");
    }

    return 0;
}
