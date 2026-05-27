#include <iostream>
using namespace std;

void menu();
void calcularAreaCuadrado();
void calcularAreaCirculo();
void calcularAreaTriangulo();


int main() {
    menu();
    return 0;
}


void menu() {
    int opcion;

   
    do {
        cout << "\n===== MENU DE AREAS =====" << endl;
        cout << "1. Cuadrado (A = L * L)" << endl;
        cout << "2. Circulo (A = Pi * R^2)" << endl;
        cout << "3. Triangulo (A = (B * H) / 2)" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                calcularAreaCuadrado();
                break;
            case 2:
                calcularAreaCirculo();
                break;
            case 3:
                calcularAreaTriangulo();
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);
}


void calcularAreaCuadrado() {
    float lado, area;
    cout << "\n--- AREA DEL CUADRADO ---" << endl;
    cout << "Ingrese el valor del lado (L): ";
    cin >> lado;

    if (lado > 0) {
        area = lado * lado;
        cout << "El area del cuadrado es: " << area << endl;
    } else {
        cout << "Error: El lado debe ser mayor a cero." << endl;
    }
}


void calcularAreaCirculo() {
    float radio, area;
    float pi = 3.141592; 
    
    cout << "\n--- AREA DEL CIRCULO ---" << endl;
    cout << "Ingrese el valor del radio (R): ";
    cin >> radio;

    if (radio > 0) {
        area = pi * (radio * radio);
        cout << "El area del circulo es: " << area << endl;
    } else {
        cout << "Error: El radio debe ser mayor a cero." << endl;
    }
}

void calcularAreaTriangulo() {
    float base, altura, area;
    cout << "\n--- AREA DEL TRIANGULO ---" << endl;
    cout << "Ingrese el valor de la base (B): ";
    cin >> base;
    cout << "Ingrese el valor de la altura (H): ";
    cin >> altura;

    if (base > 0 && altura > 0) {
        area = (base * altura) / 2.0; 
        cout << "El area del triangulo es: " << area << endl;
    } else {
        cout << "Error: La base y la altura deben ser mayores a cero." << endl;
    }
}
