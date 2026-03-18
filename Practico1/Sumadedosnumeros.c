#include <stdio.h>

int main()
{

  float nota1, nota2, nota3, promedio;

  printf("Ingrzese la primera nota:");
  scanf("%f", &nota1);

  printf("Ingrese la segunda nota:");
  scanf("%f", &nota2);

  printf("Ingrese la tercera nota:");
  scanf("%f", &nota3);

  promedio=((nota1 + nota2 + nota3 )/3);

  printf("El promedio final es:%.2f\n", promedio);


    return 0;
}
