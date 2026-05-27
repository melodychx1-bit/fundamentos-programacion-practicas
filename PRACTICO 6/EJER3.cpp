#include <iostream>

using namespace std;


void desglosarNumero(int n);


int main() {
    int n;

    cout << "Ingrese un numero entero positivo menor que 10000: ";
    cin >> n;

   
    desglosarNumero(n);

    return 0;
}


void desglosarNumero(int n) {

    if (n > 0 && n < 10000) {
        int m; 
        int c; 
        int d;
        int u; 

        m = n / 1000;          
        c = (n / 100) % 10;    
        d = (n / 10) % 10;      
        u = n % 10;            

        cout << "unidades de mil (m): " << m << endl;
        cout << "centenas (c):        " << c << endl;
        cout << "decenas (d):         " << d << endl;
        cout << "unidades (u):        " << u << endl;
    } 
    else {
        cout << "Error: El numero debe ser positivo y menor que 10000." << endl;
    }
}
