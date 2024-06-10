#include <iostream>
using namespace std;

int main(){

    int numeros;
    int vNumeros[10];
    int acuVec = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros;
        vNumeros[i] = numeros;
    }
    for (int i = 0; i < 10; i++)
    {
        acuVec += vNumeros[i];
    }
    
    cout << "La suma de los numeros es: " << acuVec << endl;
}