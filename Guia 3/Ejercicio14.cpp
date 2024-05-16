#include <iostream> 
using namespace std;

int main(){

    /*
    Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, i
    nformar si todos están ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos como crecientes. 
    Por ejemplo si la lista fuera: 
    Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado” Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado” 
    Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”

    */

    int n, anterior;
    bool ordenado = false;

    while (n != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        anterior = n;

        if(n >= anterior){
            ordenado = true;
        }

        anterior = n;
    }

    if(ordenado == true && n > anterior){
        cout << "El conjunto esta ordenado ";
    }else {
        cout << "El conjunto no esta ordenado";
    }
    

    return 0;
}