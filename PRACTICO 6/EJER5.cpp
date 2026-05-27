#include <iostream>

using namespace std;

void determinarEstacion(int dia, int mes);

int main() {
    int dia, mes, anio;

    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes (en numero): ";
    cin >> mes;
    cout << "Ingrese el año: ";
    cin >> anio; 

    determinarEstacion(dia, mes);

    return 0;
}


void determinarEstacion(int dia, int mes) {
    
    if ((mes == 9 && dia >= 21) || (mes == 10) || (mes == 11) || (mes == 12 && dia < 21)) {
        cout << "Estacion: primavera" << endl;
    }
   
    else if ((mes == 12 && dia >= 21) || (mes == 1) || (mes == 2) || (mes == 3 && dia < 21)) {
        cout << "Estacion: verano" << endl;
    }

    else if ((mes == 3 && dia >= 21) || (mes == 4) || (mes == 5) || (mes == 6 && dia < 21)) {
        cout << "Estacion: otono" << endl;
    }

    else if ((mes == 6 && dia >= 21) || (mes == 7) || (mes == 8) || (mes == 9 && dia < 21)) {
        cout << "Estacion: invierno" << endl;
    }
    else {
        cout << "Fecha ingresada no valida." << endl;
    }
}
