#include<iostream>
using namespace std;

int main(){
    int num;
    int dig;
    int total;
    int mayores;

    total = 0;
    mayores = 0;

    cout<<"Ingrese un numero: ";
    cin>>num;

    while(num>0){
        dig = num % 10;

        total = total + dig;

        if(dig > 5){
            mayores = mayores + 1;
        }

        num = num / 10;
    }

    cout<<"Total: "<<total<<endl;
    cout<<"Mayores a 5: "<<mayores;

    return 0;
}
