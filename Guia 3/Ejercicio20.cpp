#include <iostream>
using namespace std;

int main(){
    /*
        Dada una lista de números que finaliza cuando se ingresa un cero, informar el primer número par ingresado y su 
        ubicación en la lista y el último de los números primos y su ubicación en la lista. 
        Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer número par: 4 ubicación 2.  Último primo: 13 ubicación 6. 
        Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.
    */
    
    int numero, divisores = 1, contador = 1, primerPar = 0, ubicacionPrimerPar = 0, ultimoPrimo = 0, ubicacionUltimoPrimo = 0, contadorPrimo = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        contador++;

        if(numero % 2 == 0 && primerPar == 0){
            primerPar = numero;
            ubicacionPrimerPar = contador;
        }
        if(numero % divisores == 0){
            contadorPrimo++;
        
        }
        
        if(contadorPrimo == 2){
            ultimoPrimo = numero;
            ubicacionUltimoPrimo = contador;
        }
         divisores++;

    }

    cout << "El primer numero par es: " << primerPar << " y se encuentra en la ubicacion: " << ubicacionPrimerPar << endl;
    cout << "El ultimo numero primo es: " << ultimoPrimo << " y se encuentra en la ubicacion: " << ubicacionUltimoPrimo;
    

    return 0;
}