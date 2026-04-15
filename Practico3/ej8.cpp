#include <iostream>
using namespace std;

int main() {
    
    double x, suma = 0, potencia = 1;
    int n;
    int factorial = 1;
    
    cout << "Ingrese el valor de x: ";
    cin >> x;
    
    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        
        potencia = potencia * x;     
        factorial = factorial * i;   
        
        suma = suma + (potencia / factorial);
    }

    cout << "La suma de la serie es: " << suma << endl;

    return 0;
}

