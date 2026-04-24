#include<iostream>
using namespace std;

int main(){
    int num;
    int dig;
    int nuevo;
    int pos;

    nuevo = 0;
    pos = 1;

    cout<<"Ingrese numero: ";
    cin>>num;

    while(num>0){
        dig = num % 10;
        nuevo = nuevo + (9 - dig) * pos;
        pos = pos * 10;
        num = num / 10;
    }

    cout<<"Complemento: "<<nuevo;
    return 0;
}
