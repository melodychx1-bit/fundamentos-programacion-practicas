#include <iostream>
using namespace std;

int main() {
    
    int N;
    int i = 1;
    int suma = 0;
    
    cout << "Ingrese un valor para N: ";
    cin >> N;

    while (i <= N) {
        
        if (i % 2 != 0) {   // impar
            suma = suma + i;
        } else {            // par
            suma = suma - i;
        }
        
        i++;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}

