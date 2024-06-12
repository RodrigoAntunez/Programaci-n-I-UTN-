#include <iostream>
using namespace std;

/*
Dada una lista de 10 números, cargarlos en un vector. Luego contar y listar la cantidad de números pares que aparecen en el vector.
*/

void cargarVector(int vector[], int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }
}

int buscarPares(int vector[], int tamanio){
    int pares = 0;

    for (int i = 0; i < tamanio; i++)
    {
        if(vector[i] % 2 == 0){
            pares++;
        }
    }
    return pares;
}

int main(){
    const int TAMANIO = 5;
    int nVector[TAMANIO];
    int pares;

    cargarVector(nVector, TAMANIO);
    pares = buscarPares(nVector, TAMANIO);
    cout << "La cantidad de numeros pares en el vector son: " << pares << endl;
}