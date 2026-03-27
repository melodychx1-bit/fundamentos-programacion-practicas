#include <stdio.h>

int main() {

    float kWh, tarifa, total;
    float cargofijo = 8.0;

    printf("Ingrese el consumo en kWh:");
    scanf("%f", &kWh);

    if (kWh == 0) {
        printf("SIN CONSUMO REGISTRADO\n");
    } else {

        if (kWh > 0 && kWh <= 100) {
            tarifa = 0.30;
            printf("Categoria: Basica\n");
        }
        else if (kWh <= 300) {
            tarifa = 0.50;
            printf("Categoria: Media\n");
        }
        else if (kWh <= 600) {
            tarifa = 0.75;
            printf("Categoria: Alta\n");
        }
        else {
            tarifa = 1.10;
            printf("Categoria: Industrial\n");
        }

        total = (kWh * tarifa) + cargofijo;

        printf("Tarifa por kWh: %.2f Bs\n", tarifa);
        printf("Cargo fijo: %.2f Bs\n", cargofijo);
        printf("Total a pagar: %.2f Bs\n", total);
    }

    return 0;
}
