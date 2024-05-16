#include <iostream>
using namespace std;

int main(){
    /*
    Dada una lista de números que finaliza cuando se ingresa un cero,
    informar cual es el primer y segundo número impar ingresado. Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se informa 5 y -9
    */
    int n, impar1, impar2;
    bool bandera1 = false, bandera2 = false;

    while (n != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        if(n % 2 != 0 && bandera1 == false){
            impar1 = n;
            bandera1 = true;
        }else if(n % 2 != 0 && bandera2 == false){
            impar2 = n;
            bandera2 = true;
        }
    }
    cout << "EL primer numero impar ingresado es: " << impar1 << " El segundo numero impar ingresado es: " << impar2;

}