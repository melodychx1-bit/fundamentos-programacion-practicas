#include <iostream>

using namespace std;

void calcularTiempoTranscurrido(int h1, int m1, int s1, int h2, int m2, int s2);

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    cout << "=== PRIMER HORARIO ===" << endl;
    cout << "Ingrese horas: ";
    cin >> h1;
    cout << "Ingrese minutos: ";
    cin >> m1;
    cout << "Ingrese segundos: ";
    cin >> s1;

    cout << "\n=== SEGUNDO HORARIO ===" << endl;
    cout << "Ingrese horas: ";
    cin >> h2;
    cout << "Ingrese minutos: ";
    cin >> m2;
    cout << "Ingrese segundos: ";
    cin >> s2;

    
    calcularTiempoTranscurrido(h1, m1, s1, h2, m2, s2);

    return 0;
}


void calcularTiempoTranscurrido(int h1, int m1, int s1, int h2, int m2, int s2) {
    int totalSegundos1;
    int totalSegundos2;
    int diferenciaSegundos;
    
    int dh; 
    int dm; 
    int ds; 

    totalSegundos1 = (h1 * 3600) + (m1 * 60) + s1;
    totalSegundos2 = (h2 * 3600) + (m2 * 60) + s2;

    diferenciaSegundos = totalSegundos2 - totalSegundos1;

    dh = diferenciaSegundos / 3600;
    dm = (diferenciaSegundos % 3600) / 60;
    ds = diferenciaSegundos % 60;

    cout << "\nEl tiempo transcurrido es: " 
         << dh << ":" << dm << ":" << ds << endl;
}
