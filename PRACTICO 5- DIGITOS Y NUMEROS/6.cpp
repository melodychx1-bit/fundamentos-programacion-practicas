#include<iostream>
using namespace std;

int main(){
    int num;
    int dig;
    bool valido;

    valido = true;

    cout<<"Ingrese un numero: ";
    cin>>num;

    while(num>0){
        dig = num % 10;
        if(dig > 7){
            valido = false;
        }
        num = num / 10;
    }

    if(valido){
        cout<<"Valido en base 8";
    }

else{
        cout<<"Invalido en base 8";
    }

    return 0;
}
