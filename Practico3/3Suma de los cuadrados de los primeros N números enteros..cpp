#include <iostream>
using namespace std;

int main() {
    
    int N;
    int i = 1;
    int suma = 0;
    
    cout << "Ingrese un valor para N: ";
    cin >> N;

    while (i <= N) {
        suma = suma + (i * i);  
        i++;
    }

    cout << "La suma de los cuadrados es: " << suma << endl;

    return 0;
}

