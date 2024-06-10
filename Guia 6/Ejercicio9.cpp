#include <iostream>
using namespace std;

/*
Dada una lista de 20 números enteros, cargarlos en un vector. Determinar e informar con un cartel aclaratorio 
si el vector está ordenado estrictamente en forma creciente. Por ejemplo: el vector [1, 3, 5, 7, 9] 
está ordenado estrictamente. El vector [1,  5,  3,  7] no lo está.
*/

void cargarVector(int vector[], int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }
}

bool estaOrdenado(int vector[], int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        if(vector[i] > vector[i + 1]){
            return false;
        }
    }
    return true;
}

int main(){

    const int CANTIDAD = 3;
    int nVector[CANTIDAD];

    cargarVector(nVector, CANTIDAD);
    if(estaOrdenado(nVector, CANTIDAD)){
        cout << "Estan ordenados";
    }else {
        cout << "No estan ordenados";
    }

    return 0;
}