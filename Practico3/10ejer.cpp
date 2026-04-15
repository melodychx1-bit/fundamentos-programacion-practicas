#include <iostream>
using namespace std;

int main() {
    
    double x, suma = 0;
    int n;
    
    cout << "Ingrese el valor de x: ";
    cin >> x;
    
    cout << "Ingrese n (impar): ";
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        
        double potencia = 1;
        int factorial = 1;

   
        for (int j = 1; j <= i; j++) {
            potencia = potencia * x;
        }

 
        for (int j = 1; j <= i; j++) {
            factorial = factorial * j;
        }

        if ((i / 2) % 2 == 0) {
            
            suma = suma + (potencia / factorial);
        } 
        
        else {
            suma = suma - (potencia / factorial);
        }
    }

    cout << "La suma de la serie es: " << suma << endl;

    return 0;
}
