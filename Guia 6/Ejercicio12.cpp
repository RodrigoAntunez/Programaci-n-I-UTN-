#include <iostream>
using namespace std;
/*
Dada una lista de 10 números, cargarlos en un vector. 
Luego ingresar un número e informar la cantidad de veces que ese número aparece en el vector.
*/

void cargarVector(int vector[], int tamanio){
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }
}

int buscarElemento(int vector[], int tamanio, int numero){
    int contador = 0;
    for (int i = 0; i < tamanio; i++)
    {
        if(numero == vector[i]){
            contador++;
        }
    }
    return contador;
}

int main(){
    const int cantidadElementos = 5;
    int nVector[cantidadElementos];
    int numero, buscar;

    cargarVector(nVector, cantidadElementos);
    cout << "Ingrese numero a buscar en el vector: " << endl;
    cin >> buscar;
    numero = buscarElemento(nVector, cantidadElementos, buscar);
    cout << "Cantidad de veces que se repite el numero en el vector: " << numero << endl;
    
}