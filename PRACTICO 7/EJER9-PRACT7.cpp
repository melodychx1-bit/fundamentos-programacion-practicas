//EJER9-PRAC7
#include <iostream>
#include <cmath>
using namespace std;

int BIN_DEC(int binario) {
    int decimal = 0, posicion = 0, temp = binario;
    while (temp > 0) {
        int digito = temp % 10;
        decimal += digito * (int)pow(2, posicion);
        temp /= 10;
        posicion++;
    }
    return decimal;
}

int main() {
    int bin;
    cout << "Ingrese numero binario: ";
    cin >> bin;
    cout << bin << " en binario = " << BIN_DEC(bin) << " en decimal" << endl;
    return 0;
}