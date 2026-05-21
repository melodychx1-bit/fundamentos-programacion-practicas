// Ejercicio 2-PRAC7
#include <iostream>
using namespace std;

int FAC(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    if (n < 0)
        cout << "El factorial no esta definido para negativos." << endl;
    else
        cout << n << "! = " << FAC(n) << endl;
    return 0;
}
