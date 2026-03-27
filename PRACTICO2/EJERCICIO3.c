#include <stdio.h>

int main(){

float parcial1, parcial2, examen_final, proyectoI, notafinal, parciales, examenfinal, proyecto;

printf("Ingrese la nota del primer parcial:");
scanf("%f", &parcial1);

printf("Ingrese la nota del segundo parcial:");
scanf("%fg", &parcial2);


parciales= ((parcial1 + parcial2)/2)* 0.5;

printf("Ingrese la nota del examen final:");
scanf("%fg", &examen_final);

examenfinal= (examen_final * 0.3 );

printf("Ingrese la nota del proyecto:");
scanf("%fg", &proyectoI);

proyecto=(proyectoI * 0.2);

notafinal= (parciales + examenfinal + proyecto);

printf("La nota final es:%.2f\n", notafinal);

if(notafinal>=51){
   puts("EL ESTUDIANTE APROBO");

   }

else{
   puts("EL ESTUDIANTE NO APROBO");
   }

return 0;

}
