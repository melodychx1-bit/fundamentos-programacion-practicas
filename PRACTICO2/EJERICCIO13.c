#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c;
    float x1,x2;
    float real,imag;
    float delta;

    printf("Ingrese a:");
    scanf("%f",&a);

    printf("Ingrese b:");
    scanf("%f",&b);

    printf("Ingrese c:");
    scanf("%f",&c);

    if(a==0){

        if(b==0){
            printf("Ecuacion degenerada\n");
        }else{
            x1=-c/b;
            printf("Ecuacion lineal\n");
            printf("x=%.2f\n",x1);
        }
    }else{
        delta=b*b-4*a*c;

        if(delta>0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);

            printf("Dos raices reales\n");
            printf("x1=%.2f\n",x1);
            printf("x2=%.2f\n",x2);
        }
        else if(delta==0){
            x1=-b/(2*a);

            printf("Raiz doble\n");
            printf("x=%.2f\n",x1);
        }
        else{
            real=-b/(2*a);
            imag=sqrt(-delta)/(2*a);

            printf("Raices complejas\n");
            printf("x1=%.2f+%.2fi\n",real,imag);
            printf("x2=%.2f-%.2fi\n",real,imag);
        }
    }

    return 0;
}

