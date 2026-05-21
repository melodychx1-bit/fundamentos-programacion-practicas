//EJER8-PRACT7
#include <iostream>
#include <cmath>
using namespace std;

void CUADRATICA(double a, double b, double c) {
    if (a == 0) {
        if (b == 0)
            cout << "Ecuacion sin solucion (a=0, b=0)." << endl;
        else
            cout << "Ecuacion lineal: x = " << -c / b << endl;
        return;
    }
    double disc = b * b - 4 * a * c;
    if (disc > 0) {
        double x1 = (-b + sqrt(disc)) / (2 * a);
        double x2 = (-b - sqrt(disc)) / (2 * a);
        cout << "Dos raices reales:" << endl;
        cout << "  x1 = " << x1 << endl;
        cout << "  x2 = " << x2 << endl;
    } else if (disc == 0) {
        double x = -b / (2 * a);
        cout << "Raiz doble: x = " << x << endl;
    } else {
        double parteReal = -b / (2 * a);
        double parteImag = sqrt(-disc) / (2 * a);
        cout << "Dos raices complejas:" << endl;
        cout << "  x1 = " << parteReal << " + " << parteImag << "i" << endl;
        cout << "  x2 = " << parteReal << " - " << parteImag << "i" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Ingrese a, b, c de ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;
    CUADRATICA(a, b, c);
    return 0;
}