#include <iostream>

using namespace std;

void resolverSistemaLineal(float a, float b, float c, float d, float e, float f);

int main() {
    float a, b, c;
    float d, e, f;

    cout << "=== SISTEMA DE ECUACIONES LINEALES ===" << endl;
    cout << "Ecuacion 1 (aX + bY = c):" << endl;
    cout << "Ingrese a: "; cin >> a;
    cout << "Ingrese b: "; cin >> b;
    cout << "Ingrese c: "; cin >> c;

    cout << "\nEcuacion 2 (dX + eY = f):" << endl;
    cout << "Ingrese d: "; cin >> d;
    cout << "Ingrese e: "; cin >> e;
    cout << "Ingrese f: "; cin >> f; 

    
    resolverSistemaLineal(a, b, c, d, e, f);

    return 0;
}


void resolverSistemaLineal(float a, float b, float c, float d, float e, float f) {
  
    float detPrincipal = (a * e) - (b * d);
    float detX = (c * e) - (b * f);
    float detY = (a * f) - (c * d);

    cout << "\n===== ANALISIS DEL SISTEMA =====" << endl;

    
    if (detPrincipal != 0) {
        float x = detX / detPrincipal;
        float y = detY / detPrincipal;
        cout << "Tipo: Sistema Compatible Determinado (Solucion Unica)." << endl;
        cout << "Solucion: X = " << x << ", Y = " << y << endl;
    }

    else {
        if (detX == 0 && detY == 0) {
           
            cout << "Tipo: Sistema Compatible Indeterminado (Infinitas Soluciones)." << endl;
        } else {
           
            cout << "Tipo: Sistema Incompatible (No tiene solucion / Rectas paralelas)." << endl;
        }
    }
}
