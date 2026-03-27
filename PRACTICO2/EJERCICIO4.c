#include <stdio.h>

int main() {
    char nombre[50];
    float salario, aguinaldo;
    int meses;

    printf("Ingrese el nombre del trabajador: ");
    scanf(" %s", nombre);

    printf("Ingrese el salario mensual: ");
    scanf("%f", &salario);

    printf("Ingrese los meses trabajados en el año: ");
    scanf("%d", &meses);


    if (meses == 12) {


        aguinaldo = salario;
    }

    else {
        aguinaldo = (salario * meses) / 12;
    }

    printf("------RESULTADO------\n");
    printf("Nombre: %s\n", nombre);
    printf("Aguinaldo navideño: %.2f Bs\n", aguinaldo);

    return 0;
}

