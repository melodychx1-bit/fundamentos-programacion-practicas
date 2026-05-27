#include <iostream>
using namespace std;

void calcularNotaFinal();

int main() {
    char respuesta;

    do {
        calcularNotaFinal();

        cout << "\n¿Desea calcular la nota de otro alumno? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    cout << "\nPrograma finalizado. ¡Hasta luego!" << endl;
    return 0;
}


void calcularNotaFinal() {
    float parcial1, parcial2, practico, examenFinal;
    int faltas;
    float promedioParciales, notaFinal;
    
    int limiteFaltas = 9; 

    cout << "\n--- INGRESO DE NOTAS (Sobre 100) ---" << endl;
    cout << "Ingrese nota del Parcial 1: ";
    cin >> parcial1;
    cout << "Ingrese nota del Parcial 2: ";
    cin >> parcial2;
    cout << "Ingrese nota del Examen Practico: ";
    cin >> practico;
    cout << "Ingrese nota del Examen Final: ";
    cin >> examenFinal;
    cout << "Ingrese la cantidad de faltas del alumno: ";
    cin >> faltas;

    if (faltas > limiteFaltas) {
        cout << "\n[ALERTA] El alumno excedio el 20% de faltas. Examen final anulado (0)." << endl;
        examenFinal = 0.0;
    }

    promedioParciales = (parcial1 + parcial2) / 2.0;

    notaFinal = (parcial1 * 0.20) + (parcial2 * 0.20) + (practico * 0.20) + (examenFinal * 0.40);

    cout << "\n===== REPORTE DEL ALUMNO =====" << endl;
    cout << "Promedio de examenes parciales: " << promedioParciales << endl;
    cout << "Nota Final Calculada:           " << notaFinal << endl;


    if (notaFinal >= 51.0) {
        cout << "Estado: APROBADO" << endl;
    } else {
        cout << "Estado: REPROBADO" << endl;
    }
    cout << "==============================" << endl;
}
