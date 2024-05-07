#include <iostream>

using namespace std;

int main() {
    int n, max;

    cout << "Ingrese un numero: ";
    cin >> max; // Inicializar max con el primer numero ingresado

    for (int i = 1; i < 10; i++) {
        cout << "Ingrese otro numero: ";
        cin >> n;

        if (n > max) {
            max = n;
        }
    }

    cout << "El numero mas grande es: " << max;

    return 0;
}
