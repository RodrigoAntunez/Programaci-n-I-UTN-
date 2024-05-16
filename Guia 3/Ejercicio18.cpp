#include <iostream>
using namespace std;

int main(){

    /*
    Se define a un número como primo cuando tiene solamente dos divisores. Ejemplo 1: 2, 7, 11, 13 son números primos, 
    ya que todos tienen solamente dos divisores. 
    Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6) 
    Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
    Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el mismo es un número primo 
    o es no es un número primo. Debe usar un ciclo inexacto para resolver este ejercicio.
    */
    
    int n;
    int divisores = 1, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (divisores <= n)
    {

        if(n % divisores == 0){
            contador++;
        }
        divisores++;
    }
    
    if(contador == 2){
        cout << "El numero es primo";
    }else{
        cout << "El numero no es primo";
    }
    

    return 0;
}