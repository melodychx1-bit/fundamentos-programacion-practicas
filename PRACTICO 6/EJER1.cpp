#include <iostream>

using namespace std;


void calcularCostoCarta(float p);


int main() {
    float peso;

    cout << "Ingrese el peso de la carta en gramos: ";
    cin >> peso;

   
    calcularCostoCarta(peso);

    return 0;
}


void calcularCostoCarta(float p) {
    if (p > 0 && p <= 50) {
        cout << "Costo: Bs. 1.50" << endl;
    } 
    else if (p > 50 && p <= 100) {
        cout << "Costo: Bs. 4.00" << endl;
    } 
    else if (p > 100 && p <= 200) {
        cout << "Costo: Bs. 6.00" << endl;
    } 
    else if (p > 200 && p <= 350) {
        cout << "Costo: Bs. 10.50" << endl;
    } 
    else if (p > 350 && p <= 500) {
        cout << "Costo: Bs. 15.00" << endl;
    } 
    else if (p > 500) {
        cout << "NO PUEDE ENVIAR COMO CARTA" << endl;
    } 
    else {
        cout << "Peso no valido (debe ser mayor a 0 gramos)" << endl;
    }
}
