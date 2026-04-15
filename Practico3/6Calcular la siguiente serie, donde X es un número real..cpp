#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double x, suma = 0;
    int n;
    
    cout << "Ingrese el valor de x: ";
    cin >> x;
    
    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        suma = suma + pow(x, i);
    }

    cout << "La suma de la serie es: " << suma << endl;

    return 0;
}
