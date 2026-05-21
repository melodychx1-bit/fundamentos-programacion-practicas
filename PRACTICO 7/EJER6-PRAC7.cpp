//EJER6-PRAC7
#include <iostream>
using namespace std;

void nombreMes(int mes) {
    switch (mes) {
        case 1:  cout << "Enero";      break;
        case 2:  cout << "Febrero";    break;
        case 3:  cout << "Marzo";      break;
        case 4:  cout << "Abril";      break;
        case 5:  cout << "Mayo";       break;
        case 6:  cout << "Junio";      break;
        case 7:  cout << "Julio";      break;
        case 8:  cout << "Agosto";     break;
        case 9:  cout << "Septiembre"; break;
        case 10: cout << "Octubre";    break;
        case 11: cout << "Noviembre";  break;
        case 12: cout << "Diciembre";  break;
        default: cout << "MesInvalido";
    }
}

void LITERAL(int dia, int mes, int anio) {
 
    int anioCompleto;
    if (anio >= 0 && anio <= 99)
        anioCompleto = 1900 + anio;
    else
        anioCompleto = anio;

    cout << dia << " de ";
    nombreMes(mes);
    cout << " de " << anioCompleto << endl;
}

int main() {
    int dia, mes, anio;
    cout << "Ingrese dia mes anio: ";
    cin >> dia >> mes >> anio;
    LITERAL(dia, mes, anio);
    return 0;
}