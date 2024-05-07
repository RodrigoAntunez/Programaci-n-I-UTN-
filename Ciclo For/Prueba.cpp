#include <iostream>

using namespace std;

int main() {
    int consumo;
    double totalPagar = 0;

    cout << "Ingrese el consumo en kilovatios (kW): ";
    cin >> consumo;

    if (consumo <= 100) {
        totalPagar = 10 * consumo;
    } else if (consumo <= 200) {
        totalPagar = 10 * 100 + 12 * (consumo - 100);
    } else {
        totalPagar = 10 * 100 + 12 * 100 + 15 * (consumo - 200);
    }

    cout << "El total a pagar es: $" << totalPagar << endl;

    return 0;
}
