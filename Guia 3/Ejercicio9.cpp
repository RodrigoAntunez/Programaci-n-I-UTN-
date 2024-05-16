#include <iostream>

using namespace std;

int main(){

    /*
    Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero,
    luego informar el máximo de los pares.
    Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
    Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
    Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máximo -8.
    */

    int n, nPar, parMax;

    while (n != 0)
    {
        cout << "Ingresar un numero: ";
        cin >> n;

        if(n % 2 == 0){
            nPar = n;
            if(nPar > parMax){
                parMax = nPar;
            }
        }
    }
    
    cout << "El numero par mayor es: " << parMax;

    return 0;
}