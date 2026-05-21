// EJER12 -PRACT7
#include <iostream>
using namespace std;

int VALIDAR_FECHA(int dia, int mes, int anio) {

    int diasMes;

    if (anio <= 0) {
        return 0;
    }

    if (mes < 1 || mes > 12) {
        return 0;
    }

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
        mes == 8 || mes == 10 || mes == 12) {

        diasMes = 31;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {

        diasMes = 30;
    }
    else {

        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            diasMes = 29;
        }
        else {
            diasMes = 28;
        }
    }

    if (dia < 1 || dia > diasMes) {
        return 0;
    }

    return 1;
}

int main() {

    int dia, mes, anio;

    cout << "Ingrese dia mes anio: ";
    cin >> dia >> mes >> anio;

    if (VALIDAR_FECHA(dia, mes, anio)) {
        cout << "Fecha valida";
    }
    else {
        cout << "Fecha invalida";
    }

    return 0;
}