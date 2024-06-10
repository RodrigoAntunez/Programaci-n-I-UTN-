#include <iostream>
using namespace std;   

int main(){
    int nVector [10];
    int numero, maximo, posicion;

// Ingreso de datos, acumulo el primer numero para comparar maximo. 
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        nVector[i] = numero;
        maximo = nVector[0];
    }
    
// Comparacion de numeros mayores para sacar el maximo y su posicion
    for (int i = 0; i < 10; i++)
    {
        if(nVector[i] > maximo){
            maximo = nVector[i];
            posicion = i + 1;
        }
    }
    cout << "El numero mayor es: " << maximo << " en la posicion: " << posicion << endl;
}