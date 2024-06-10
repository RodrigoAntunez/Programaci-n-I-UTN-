#include <iostream>
using namespace std;

/*
Dada una lista de 20 números, cargarlos en un vector.
Determinar e informar la cantidad de “rupturas” que tiene el vector con respecto a un orden estrictamente creciente. 
Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.
*/
void cargarVector(int vector[], int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }
}

int estaOrdenado(int vector[], int tamanio){
    int contador = 0;
    for (int i = 0; i < tamanio; i++)
    {
        if(vector[i] > vector[i + 1]){
            contador++;
        }
    }
    return contador;
}

int main(){
    const int TAMANIO = 11;
    int rupturas;
    int nVector[TAMANIO];

    cargarVector(nVector, TAMANIO);
    rupturas = estaOrdenado(nVector, TAMANIO);
    cout << "La cantidad de rupturas que tiene el vector es: " << rupturas << endl;
}

