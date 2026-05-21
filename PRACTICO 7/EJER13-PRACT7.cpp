//EJER13-PRACT7
#include <iostream>
#include <cmath>
using namespace std;

double REDONDEAR(double R, int n) {
    double factor = pow(10, n);
    return floor(R * factor + 0.5) / factor;
}

int main() {
    double R;
    int n;
    cout << "Ingrese el numero real: ";
    cin >> R;
    cout << "Ingrese la cantidad de decimales: ";
    cin >> n;
    cout << "Redondeado: " << REDONDEAR(R, n) << endl;
    return 0;
}