#include <stdio.h>
#include <math.h>
 int main(){

 float area_lateral, area_total, volumen, radio, altura;
 const float PI=3.1416;
 printf("Ingrese el valor del radio:");
 scanf("%f", &radio);

 printf("Ingrese el valor de la altura:");
 scanf("%f", &altura);

 area_lateral= (2 * PI * radio * altura);
 area_total= ( 2 * PI * radio * (radio + altura));
 volumen=(PI * pow(radio, 2)* altura);

 printf("-------AREA DE LA SUPERFICIE-------\n");

 printf("Area Lateral:%.2f\n", area_lateral);
 printf("Area total:%.2f\n", area_total);

 printf("-------VOLUMEN DEL CILINDRO-------\n");

 printf("El volumen del cilindro es:%.2f\n", volumen);

 return 0;

 }
