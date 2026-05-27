#include <iostream>
using namespace std;

void calcularTotalCompra(int cantH, int cantHQ, int cantP, int cantS);

int main() {
    int cantHamburguesas;
    int cantConQueso;
    int cantPapas;
    int cantSoda;

    cout << "=== MENU DE INGRESO DE CANTIDADES ===" << endl;
    cout << "Cantidad de Hamburguesas simples: ";
    cin >> cantHamburguesas;

    cout << "Cantidad de Hamburguesas con queso: ";
    cin >> cantConQueso;

    cout << "Cantidad de Papas fritas: ";
    cin >> cantPapas;

    cout << "Cantidad de Sodas: ";
    cin >> cantSoda;

    calcularTotalCompra(cantHamburguesas, cantConQueso, cantPapas, cantSoda);

    return 0;
}


void calcularTotalCompra(int cantH, int cantHQ, int cantP, int cantS) {
   
    float parcialH = cantH * 3.0;
    float parcialHQ = cantHQ * 5.0;
    float parcialP = cantP * 2.0;
    float parcialS = cantS * 2.5;

    float totalGeneral = parcialH + parcialHQ + parcialP + parcialS;

   
    cout << "\n==============================================" << endl;
    cout << "ITEM\t\t\tCANTIDAD\tTOTAL PARCIAL" << endl;
    cout << "==============================================" << endl;
    cout << "Hamburguesas (3Bs)\t  " << cantH << "\t\tBs. " << parcialH << endl;
    cout << "Hamburguesas c/q (5Bs)\t  " << cantHQ << "\t\tBs. " << parcialHQ << endl;
    cout << "Papas fritas (2Bs)\t  " << cantP << "\t\tBs. " << parcialP << endl;
    cout << "Soda (2.5Bs)\t\t  " << cantS << "\t\tBs. " << parcialS << endl;
    cout << "----------------------------------------------" << endl;
    cout << "T O T A L\t\t\t\tBs. " << totalGeneral << endl;
    cout << "==============================================" << endl;
}
