// EJER14-PRACT7
#include <iostream>
using namespace std;

int esBisiesto(int anio) {

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return 1;
    }
    else {
        return 0;
    }
}

int diasEnMes(int mes, int anio) {

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 ||
        mes == 8 || mes == 10 || mes == 12) {

        return 31;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {

        return 30;
    }
    else {

        if (esBisiesto(anio)) {
            return 29;
        }
        else {
            return 28;
        }
    }
}

int diasTotales(int dia, int mes, int anio) {

    int total = 0;


    for (int i = 1; i < anio; i++) {

        if (esBisiesto(i)) {
            total = total + 366;
        }
        else {
            total = total + 365;
        }
    }

    for (int i = 1; i < mes; i++) {

        total = total + diasEnMes(i, anio);
    }


    total = total + dia;

    return total;
}

int DIAS_ENTRE(int d1, int m1, int a1, int d2, int m2, int a2) {

    int fecha1 = diasTotales(d1, m1, a1);
    int fecha2 = diasTotales(d2, m2, a2);

    if (fecha1 > fecha2) {
        return fecha1 - fecha2;
    }
    else {
        return fecha2 - fecha1;
    }
}

int main() {

    int d1, m1, a1;
    int d2, m2, a2;

    cout << "Fecha 1 (dia mes anio): ";
    cin >> d1 >> m1 >> a1;

    cout << "Fecha 2 (dia mes anio): ";
    cin >> d2 >> m2 >> a2;

    cout << "Dias transcurridos: ";
    cout << DIAS_ENTRE(d1, m1, a1, d2, m2, a2);

    return 0;
}