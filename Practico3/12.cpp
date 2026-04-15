#include <iostream>
using namespace std;

int main() {
    
    int a, b, A, B, residuo, mcd, mcm;
    
    cout << "Ingrese el primer numero: ";
    cin >> a;
    
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    A = a;
    B = b;

    while (b != 0) {
        residuo = a % b;
        a = b;
        b = residuo;
    }

    mcd = a;

    mcm = (A * B) / mcd;

    cout << "El MCD es: " << mcd << endl;
    cout << "El MCM es: " << mcm << endl;

    return 0;
}
