//EJER10-PRACT7
#include <iostream>
using namespace std;

void ROMANO(int n) {

    if (n <= 0 || n > 3999) {
        cout << "Numero fuera de rango";
        return;
    }

    while (n > 0) {

        if (n >= 1000) {
            cout << "M";
            n -= 1000;
        }
        else if (n >= 900) {
            cout << "CM";
            n -= 900;
        }
        else if (n >= 500) {
            cout << "D";
            n -= 500;
        }
        else if (n >= 400) {
            cout << "CD";
            n -= 400;
        }
        else if (n >= 100) {
            cout << "C";
            n -= 100;
        }
        else if (n >= 90) {
            cout << "XC";
            n -= 90;
        }
        else if (n >= 50) {
            cout << "L";
            n -= 50;
        }
        else if (n >= 40) {
            cout << "XL";
            n -= 40;
        }
        else if (n >= 10) {
            cout << "X";
            n -= 10;
        }
        else if (n >= 9) {
            cout << "IX";
            n -= 9;
        }
        else if (n >= 5) {
            cout << "V";
            n -= 5;
        }
        else if (n >= 4) {
            cout << "IV";
            n -= 4;
        }
        else {
            cout << "I";
            n -= 1;
        }
    }

    cout << endl;
}

int main() {

    int n;

    cout << "Ingrese un numero entero (1-3999): ";
    cin >> n;

    cout << n << " en romano: ";

    ROMANO(n);

    return 0;
}