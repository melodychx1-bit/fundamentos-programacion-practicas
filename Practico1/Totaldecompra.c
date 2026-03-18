#include <stdio.h>

int main()
{

  float numero1, numero2;

  printf("Ingrese el primer numero:");
  scanf("%f", &numero1);

  printf("Ingrese el segundo numero:");
  scanf("%f", &numero2);

   if(numero1>numero2){

       printf("El numero mayor es:%.2f\n", numero1);
   }
   else{

       printf("El numero mayor es:%.2f\n", numero2);
   }

    return 0;
}

