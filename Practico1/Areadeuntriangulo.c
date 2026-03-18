#include <stdio.h>

int main()
{

  float base, altura, area;

  printf("Ingrese la base:");
  scanf("%f", &base);

  printf("Ingrese la altura:");
  scanf("%f", &altura);

  area=((base * altura)/2);


  printf("El area del triangulo es:%.2f\n", area);


    return 0;
}

