#include<iostream>
using namespace std;

int main(){
    int num;
    int dig;
    int anterior;
    bool valido;

    anterior = -1;
    valido = true;

    cout<<"Ingrese PIN de 4 digitos: ";
    cin>>num;

    for(int i=0; i<4; i++){
        dig = num % 10;

        if(dig == anterior){
            valido = false;
        }

        anterior = dig;
        num = num / 10;
    }

    if(num != 0){
        valido = false;
    }

    if(valido){
        cout<<"PIN valido";
    }

else{
        cout<<"PIN invalido";
    }

    return 0;
}
