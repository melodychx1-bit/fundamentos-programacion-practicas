// Ejercicio 3-PRAC7
#include <iostream>
#include <cmath>
using namespace std;

double POTEN(double x, double y) {
    return pow(x, y);
}

double FAC(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int X, N;
    cout << "Ingrese X: ";
    cin >> X;
    cout << "Ingrese N (terminos): ";
    cin >> N;

    double suma = 0;
    for (int i = 1; i <= N; i++)
        suma += POTEN(X, i) / FAC(i);

    cout << "Suma de la serie = " << suma << endl;
    return 0;
}