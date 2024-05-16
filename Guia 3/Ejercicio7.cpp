#include <iostream>

using namespace std;

int main(){

    /*
    Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.
    Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
    Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
    Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listará Máximo -5.
    */

    int n, max;

    cout << "Ingrese un numero: ";
    cin >> n;

    max = n;
    
    while (n != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> n;
        if (n > max){
            max = n;
        }
        
    }
    cout << "El numero maximo es: " << max;

    return 0;
}