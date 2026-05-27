#include <iostream>
#include <cmath> 

using namespace std;

void resolverCuadraticaCompleta(float a, float b, float c);

int main() {
    float a, b, c;

    cout << "=== SOLUCION DE ECUACION CUADRATICA (TODOS LOS CASOS) ===" << endl;
    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

  
    resolverCuadraticaCompleta(a, b, c);

    return 0;
}



void resolverCuadraticaCompleta(float a, float b, float c) {
  
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "La ecuacion tiene infinitas soluciones (0 = 0)." << endl;
            } else {
                cout << "La ecuacion es una inconsistencia (No tiene solucion)." << endl;
            }
        } else {
           
            float x = -c / b;
            cout << "No es cuadratica. Es una ecuacion lineal con solucion unica x = " << x << endl;
        }
    } 
    
    else {
        float discriminante = (b * b) - (4 * a * c);

      
        if (discriminante > 0) {
            float x1 = (-b + sqrt(discriminante)) / (2 * a);
            float x2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << "Dos soluciones reales y distintas:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } 
       
        else if (discriminante == 0) {
            float x = -b / (2 * a);
            cout << "Una unica solucion real (raices iguales):" << endl;
            cout << "x1 = x2 = " << x << endl;
        } 
       
        else {
            float parteReal = -b / (2 * a);
            float parteImaginaria = sqrt(-discriminante) / (2 * a); 
           
            
            cout << "Dos soluciones complejas conjugadas:" << endl;
            cout << "x1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
            cout << "x2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
        }
    }
}
