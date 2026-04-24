#include<iostream>
using namespace std;

int main(){
    int num;
    int dig;
    int suma;
    int pares;

    suma = 0;
    pares = 0;

    cout<<"Ingrese numero: ";
    cin>>num;

    while(num>0){
        dig = num % 10;

        suma = suma + dig;

        if(dig % 2 == 0){
            pares = pares + 1;
        }

        num = num / 10;
    }

    if(pares >= 2 && suma > 15){
        cout<<"Seguro";
    }

else{
        cout<<"No seguro";
    }

    return 0;
}

