#include <iostream>
using namespace std;

int main(){
    
    int N;
    int i=1;
    int suma=0;
    
cout<<"Ingrese un  valor para N:";
cin>>N;

while(i<=N){
    
    if(i%2!=0){
       suma=suma+i;
    }
       i++;
    
}

cout<<"La suma total de los numeros impares es:"<<suma<<endl;

return 0;
    
    
}
