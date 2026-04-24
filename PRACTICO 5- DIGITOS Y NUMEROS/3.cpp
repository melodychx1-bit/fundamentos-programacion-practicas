#include<iostream>
using namespace std;

int main(){
    int num;
    int dig;
    int cont;

    cont = 0;

    cout<<"Ingrese un numero: ";
    cin>>num;

    while(num>0){
        dig = num % 10;
        if(dig % 2 == 0){
            cont = cont + 1;
        }
        num = num / 10;
    }

    cout<<"Pares: "<<cont;
    return 0;
}
