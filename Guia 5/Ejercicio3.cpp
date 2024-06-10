#include <iostream>
using namespace std;

/*
Hacer una función llamada EsPrimo que determine si un número es primo o no. 
La función debe recibir el número y devolver true si es primo o false si no lo es. La función no debe mostrar nada por pantalla. 
Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego un cartel indicando si el número ingresado 
es primo o no es primo.
*/

bool esPrimo(int n){
    int contador = 0;
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            contador++;
        }
    }

    if(contador == 2){
        return true;
    }else{
        return false;
    }
}

int main(){

    int n;
    bool resultado;

    cout << "Ingrese un numero: ";
    cin >> n;

    if(esPrimo(n)){
        cout << "El numero ingresado es primo" << endl;
    }else{
        cout << "El numero ingresado no es primo" << endl;
    }
    

    return 0;
}