#include <iostream>
#include <cmath> 

using namespace std;


void resolverEcuacionCuadratica(float a, float b, float c);


int main() {
    float a, b, c;

    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;


    if (a == 0) {
        cout << "El coeficiente 'a' no puede ser cero en una ecuacion cuadratica." << endl;
    } else {
   
        resolverEcuacionCuadratica(a, b, c);
    }

    return 0;
}


void resolverEcuacionCuadratica(float a, float b, float c) {
    float discriminante;
    float x1, x2;

    discriminante = (b * b) - (4 * a * c);

    if (discriminante < 0) {
        cout << "No existen soluciones reales (el discriminante es negativo)." << endl;
    } 
    else {
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        cout << "La solucion x1 es: " << x1 << endl;
        cout << "La solucion x2 es: " << x2 << endl;
    }
}
