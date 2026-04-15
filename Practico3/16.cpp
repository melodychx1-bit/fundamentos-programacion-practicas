int main() {
    
    int N;
    bool esPrimo = true;
    
    cout << "Ingrese un numero: ";
    cin >> N;

    if (N <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i < N; i++) {
            if (N % i == 0) {
                esPrimo = false;
            }
        }
    }

    if (esPrimo) {
        cout << "El numero es primo" << endl;
    } else {
        cout << "El numero NO es primo" << endl;
    }

    return 0;
}
