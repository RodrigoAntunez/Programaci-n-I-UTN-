#include <iostream>

using namespace std;

int main(){

    /*
    Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y el mínimo. 

    Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0. 
    Se listará Máximo 42 Mínimo -15. 

    Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0. 
    Se listará Máximo 42 Mínimo 5. 

    Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0. 
    Se listará Máximo -5 Mínimo -42. 
    */

    int n, max, min;

    cout << "Ingrese un numero: ";
        cin >> n;

        max = n;
        min = n;
    while (n != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        // max = n;
        // min = n;

        if(n > max){
            max = n;
        }else if(n < min){
            min = n;
        }
    }
    cout << "El numero mayor es: " << max << endl;
    cout << "El numero menor es: " << min;

    return 0;
}