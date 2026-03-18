
#include <stdio.h>

int main() {

    float horas, pagoporhora, salario, bono, salariototal;
    const float tasa = 0.10;


    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el pago por hora: ");
    scanf("%f", &pagoporhora);


    salario = horas * pagoporhora;

    if(horas > 40) {
        bono = salario * tasa;
    }
else {
        bono = 0;
    }

    salariototal = salario + bono;

    printf("El salario total es: %.2f\n", salariototal);

    return 0;
}

