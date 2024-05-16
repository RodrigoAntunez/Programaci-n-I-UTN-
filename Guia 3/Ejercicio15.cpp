#include <iostream>
using namespace std;

int main(){

    /*
    Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, 
    informar los 2 mayores valores ingresados, aclarando cual es el máximo y cuál el que le sigue. 
    Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12. 
    Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14. 
    Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4 
    */

    int numero, max1, max2=0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    max1 = numero;
    //max2 = max1;

    while (numero != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        
        if(numero > max1 && numero !=0){
            max1 = numero;
        }
        if(numero > max2 && max2 < max1 && numero != 0){
            max2 = numero;
        }

    }
    
    cout << "El numero mayor es: " << max1 << " el numero que le sigue es: " << max2;

    return 0;
}