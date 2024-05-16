#include <iostream>

using namespace std;

int main(){

    /*
    Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, 
    luego informar cuántos son positivos y cuántos son negativos.
    Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
    */

    int n;
    int nPositivos= 0, nNegativos = 0;

    
    while (n != 0)
    {
        cout << "Ingresar un numero: ";
        cin >> n;
        if(n >= 0){
            nPositivos++;
        }else{
            nNegativos++;
        }
    }
    cout << "La cantidad de numero positivos ingresados es: " << nPositivos << endl;
    cout << "La cantidad de numeros negativos ingresados es: " << nNegativos;

    return 0;
}