//EJER4-PRACT7
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
    cout << "Ingrese N (cantidad de terminos): ";
    cin >> N;

    double suma = 0;
    int signo = 1;
    for (int i = 1; i <= N; i++) {
        int exp = 2 * i - 1;
        suma += signo * (POTEN(X, exp) / FAC(exp));
        signo *= -1;
    }

    cout << "Suma de la serie alternante = " << suma << endl;
    return 0;
}