#include <stdio.h>

int main() {
    float A, B, C, D, E, F;
    float det, x, y;

    printf("Ingrese A: ");
    scanf("%f", &A);

    printf("Ingrese B: ");
    scanf("%f", &B);

    printf("Ingrese C: ");
    scanf("%f", &C);

    printf("Ingrese D: ");
    scanf("%f", &D);

    printf("Ingrese E: ");
    scanf("%f", &E);

    printf("Ingrese F: ");
    scanf("%f", &F);

    det =(A * E - B * D);

    if (det != 0) {

        x = (C * E - B * F) / det;
        y = (A * F - C * D) / det;

        printf("Solucion:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }

    else {

        printf("\nNo tiene solucion unica\n");
    }

    return 0;
}
