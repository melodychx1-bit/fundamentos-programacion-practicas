#include <iostream>
using namespace std;

int main() {
    
    int n;
    int a = 1, b = 1, c;
    
    cout << "Ingrese un valor a n: ";
    cin >> n;

    if (n == 0 || n == 1) {
        
        cout << "El termino es: 1" << endl;
    } 
    
    else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        
        cout << "El termino es: " << b << endl;
    }

    return 0;
}

