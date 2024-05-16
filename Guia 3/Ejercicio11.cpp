#include <iostream>
using namespace std;

int main(){

    /*
    Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, 
    informar el máximo de los negativos y el mínimo de los positivos. 
    Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0. 
    Máximo Negativo: -3. 
    Mínimo Positivo: 2.
    */

    int n, maxNeg, minPos;

    cout << "Ingrese un numero: ";
    cin >> n;

    maxNeg = n;
    minPos = n;

    while (n != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        if(n < 0){
            maxNeg = n;
        }else if(n > 0 && n < minPos){
            minPos = n;
        }
    }
    
    cout << "El maximo negativo es: " << maxNeg << " El minimo positivo es: " << minPos;

    return 0;
}