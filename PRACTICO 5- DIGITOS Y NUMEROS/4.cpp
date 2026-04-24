#include<iostream>
using namespace std;

int main(){
    int num;
    int copia;
    int inv;
    int dig;

    inv = 0;

    cout<<"Ingrese un numero: ";
    cin>>num;

    copia = num;

    while(num>0){
        dig = num % 10;
        inv = inv*10 + dig;
        num = num / 10;
    }

    if(copia == inv){
        cout<<"Es capicua";
    }

else{
        cout<<"No es capicua";
    }

    return 0;
}
