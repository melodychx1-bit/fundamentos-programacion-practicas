#include <stdio.h>

int main()
{
    float notafinal;

    printf("Ingrese la nota final:");
    scanf("%f", &notafinal);

    if(notafinal>=51){

      puts("El alumno esta aprobado");
    }

    else{

        puts("El alumno no aprobo");
    }

    return 0;
}

