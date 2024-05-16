#include <iostream>
using namespace std;

int main(){
    /*
    Dada una lista de números que finaliza cuando se ingresa un cero, 
    informar cual es el primer y último número impar ingresado. Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.
    */
    int numero, primer_impar = 0, ultimo_impar = 0;

    cout << "Ingrese una lista de números. Finalice con 0:\n";

    cin >> numero;
    while (numero != 0) {
        if (numero % 2 != 0) {
            if (primer_impar == 0) {
                primer_impar = numero;
            }
            ultimo_impar = numero;
        }
        cin >> numero;
    }

    if (primer_impar != 0) {
        cout << "El primer número impar ingresado fue: " << primer_impar << endl;
        cout << "El último número impar ingresado fue: " << ultimo_impar << endl;
    } else {
        cout << "No se ingresaron números impares." << endl;

    return 0;
}

}