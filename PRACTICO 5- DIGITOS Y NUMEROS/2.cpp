#include<iostream>
using namespace std;

int main(){
    int num;
    int invertido;
    int dig;

    invertido = 0;

    cout<<"Ingrese numero: ";
    cin>>num;

    while(num>0){
        dig = num % 10;
        invertido = invertido*10 + dig;
        num = num / 10;
    }

    cout<<"Invertido: "<<invertido;
    return 0;
}
