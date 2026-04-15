#include <iostream>
using namespace std;

int main() {
    
    int N;
    int factorial = 1;
    
    cout << "Ingrese un numero N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        factorial = factorial * i;
    }

    cout << "El factorial de " << N << " es: " << factorial << endl;

    return 0;
}
