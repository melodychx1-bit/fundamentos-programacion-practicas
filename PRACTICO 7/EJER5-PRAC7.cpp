//EJER5-PRAC7
#include <iostream>
using namespace std;

void SISTEMA(double a, double b, double c, double d, double e, double f,
             double &x, double &y) {
    double det = a * e - b * d;
    if (det == 0)
        cout << "Sin solucion unica (determinante = 0)." << endl;
    else {
        x = (-c * e + b * f) / det;
        y = (-a * f + c * d) / det;
    }
}

int main() {
    double a, b, c, d, e, f, X = 0, Y = 0;
    cout << "Sistema: Ax + By + C = 0" << endl;
    cout << "         Dx + Ey + F = 0" << endl;
    cout << "A B C: "; cin >> a >> b >> c;
    cout << "D E F: "; cin >> d >> e >> f;
    SISTEMA(a, b, c, d, e, f, X, Y);
    cout << "X = " << X << "  Y = " << Y << endl;
    return 0;
}