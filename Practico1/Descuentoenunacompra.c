
#include <stdio.h>

int main() {

    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0) {
        printf("El numero es Par");
    }

    else {
        printf("El numero es Impar");
    }

    return 0;
}

