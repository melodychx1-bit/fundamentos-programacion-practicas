#include<iostream>
using namespace std;

int main(){
    int num;
    int suma;
    int dig;

    suma = 0;

    cout<<"Ingrese un numero: ";
    cin>>num;

    while(num>0){
        dig = num % 10;
        suma = suma + dig;
        num = num / 10;
    }

    cout<<"Suma: "<<suma;
    return 0;
}

