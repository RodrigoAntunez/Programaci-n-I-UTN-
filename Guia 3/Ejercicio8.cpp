#include <iostream>

using namespace std;

int main(){

    /*
    Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y la 
    posición del máximo en la lista. En caso de “empates” considerar la primera aparición.
    Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7. 
    Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
    Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listará Máximo -3 Posición 4.
    */

    int n, nMax, pos = 1, posMax=1;
    
    cout << "Ingrese un numero: ";
    cin >> n;

    nMax = n;
    posMax = pos;

    while (n != 0)
    {
        cout << "Ingrse un numero: ";
        cin >> n;
        pos++;

        if(n > nMax){
            nMax = n;
            posMax = pos;
        }
    }
    
    cout << "El numero mas grande es: " << nMax << " en la posicion: " << posMax <<endl;

    return 0;
}