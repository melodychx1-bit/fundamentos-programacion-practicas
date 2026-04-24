#include<iostream>
using namespace std;

int main(){
    int num;
    int dig;
    int total;
    int cont;
    int mayores;

    total = 0;
    cont = 0;
    mayores = 0;

    cout<<"Ingrese numero: ";
    cin>>num;

    while(num>0){
        dig = num % 10;

        total = total + dig;

        if(dig > 5){
            mayores = mayores + 1;
        }

        cont = cont + 1;
        num = num / 10;
    }

    float promedio = (float)total / cont;

    cout<<"Total: "<<total<<endl;
    cout<<"Mayores a 5: "<<mayores<<endl;
    cout<<"Promedio: "<<promedio;

    return 0;
}

