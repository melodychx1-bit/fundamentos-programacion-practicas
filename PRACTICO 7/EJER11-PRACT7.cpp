///EJER11-PRAC7
#include <iostream>
#include <cmath>
using namespace std;

void unidad(int n) {
    switch(n) {
        case 1: cout << "un"; break;
        case 2: cout << "dos"; break;
        case 3: cout << "tres"; break;
        case 4: cout << "cuatro"; break;
        case 5: cout << "cinco"; break;
        case 6: cout << "seis"; break;
        case 7: cout << "siete"; break;
        case 8: cout << "ocho"; break;
        case 9: cout << "nueve"; break;
    }
}

void decena(int n) {
    if (n >= 10 && n <= 19) {
        switch(n) {
            case 10: cout << "diez"; break;
            case 11: cout << "once"; break;
            case 12: cout << "doce"; break;
            case 13: cout << "trece"; break;
            case 14: cout << "catorce"; break;
            case 15: cout << "quince"; break;
            case 16: cout << "dieciseis"; break;
            case 17: cout << "diecisiete"; break;
            case 18: cout << "dieciocho"; break;
            case 19: cout << "diecinueve"; break;
        }
    } else {
        int dec = n / 10;
        int uni = n % 10;
        switch(dec) {
            case 2: cout << "veinte"; break;
            case 3: cout << "treinta"; break;
            case 4: cout << "cuarenta"; break;
            case 5: cout << "cincuenta"; break;
            case 6: cout << "sesenta"; break;
            case 7: cout << "setenta"; break;
            case 8: cout << "ochenta"; break;
            case 9: cout << "noventa"; break;
        }
        if (uni != 0) { cout << " y "; unidad(uni); }
    }
}

void centena(int n) {
    int cen = n / 100;
    int resto = n % 100;
    if (cen == 1 && resto == 0) { cout << "cien"; }
    else {
        switch(cen) {
            case 1: cout << "ciento "; break;
            case 2: cout << "doscientos "; break;
            case 3: cout << "trescientos "; break;
            case 4: cout << "cuatrocientos "; break;
            case 5: cout << "quinientos "; break;
            case 6: cout << "seiscientos "; break;
            case 7: cout << "setecientos "; break;
            case 8: cout << "ochocientos "; break;
            case 9: cout << "novecientos "; break;
        }
        if (resto > 0) {
            if (resto < 10) unidad(resto);
            else decena(resto);
        }
    }
}

void LITERAL_NUM(double R) {
    int entero = (int)R;
    int centavos = (int)round((R - entero) * 100);

    int miles = entero / 1000;
    int resto = entero % 1000;

    if (miles > 0) {
        unidad(miles);
        cout << " mil ";
    }
    if (resto >= 100) centena(resto);
    else if (resto >= 10) decena(resto);
    else if (resto > 0) unidad(resto);
    else if (miles == 0) cout << "cero";

    cout << " " << centavos << "/100 bolivianos" << endl;
}

int main() {
    double R;
    cout << "Ingrese un monto (hasta 9999.99): ";
    cin >> R;
    cout << "Bs " << R << " = ";
    LITERAL_NUM(R);
    return 0;
}