#include <iostream>
using namespace std;

int main (){
    /*
    Hacer un programa para ingresar una lista de números que finaliza cuando se ingresan dos números consecutivos iguales, y luego informar el máximo. Cuando se ingresa el número repetido el mismo debe ser descartado. 
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listará Máximo 35. 
En este caso, el segundo número 22 no se analiza, solo sirve para finalizar el ingreso. 
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listará Máximo 55. 
En este caso, el segundo número 33 no se analiza, solo sirve para finalizar el ingreso. 
Ejemplo C: 5, 10, 20, 8, 55, 13, 55, -8, -5,  88, 88. Se listará Máximo 88. 
En este caso, el segundo número 88 no se analiza, solo sirve para finalizar el ingreso. 

    */

    int numero, maximo, numero2 = 0;

    cout << "Ingrese un numero; ";
    cin >> numero;

    maximo = numero;

    while (numero != numero2)
    {
        numero2 = numero;
        
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero > maximo){
            maximo = numero;
        }
        
    }

    cout << "El numero maximo es: " << maximo;
    

    return 0;
}