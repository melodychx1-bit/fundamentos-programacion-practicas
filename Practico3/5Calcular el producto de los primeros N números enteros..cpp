#include <iostream>
using namespace std;

int main() {
    
    int N;
    int i = 1;
    int producto = 1;  
    
    cout << "Ingrese un valor para N: ";
    cin >> N;

    while (i <= N) {
        producto = producto * i;
        i++;
    }

    cout << "El producto es: " << producto << endl;

    return 0;
}
