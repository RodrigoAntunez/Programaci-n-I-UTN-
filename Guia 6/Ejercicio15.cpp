#include <iostream>
using namespace std;

/*
Dada una lista de 5 números, cargarlos en un vector. Armar luego otro vector de 9 elementos donde por cada 2 
elementos del vector original intercale el promedio de ellos. Por ejemplo: [2, 4, 6, 8, 10],  el vector queda: 
[2, 3, 4, 5, 6, 7, 8, 9, 10].
*/

void cargarVector(int vector[], int tamanio){
    int minimo;
    for (int i = 0; i < tamanio; i++)
    {
    
        cout << "Ingrese un numero: ";
        cin >> vector[i];
        minimo = vector[0];
    }

}

void mostrarVector(int vector[], int tamanio){
    int minimo = vector[0];
    for (int i = minimo; i < tamanio; i++)
    {
        cout << vector[i] << " " ;
    }
    
}




int main(){
    const int TAMANIO = 4;
    int nVector[TAMANIO];

    cargarVector(nVector, TAMANIO);
    mostrarVector(nVector, TAMANIO);
}