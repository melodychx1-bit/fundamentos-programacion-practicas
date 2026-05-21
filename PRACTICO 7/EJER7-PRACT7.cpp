//EJER7-PRAC7
#include <iostream>
using namespace std;

double FAC(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, r;
    cout << "Ingrese n y r: ";
    cin >> n >> r;
    if (r > n || r < 0 || n < 0)
        cout << "Valores invalidos." << endl;
    else {
        double C = FAC(n) / (FAC(r) * FAC(n - r));
        cout << "C(" << n << ", " << r << ") = " << (int)C << endl;
    }
    return 0;
}