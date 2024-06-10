#include <iostream>
using namespace std;

int main(){
    int nVector[10];
    int numero;
    float suma = 0, promedio = 0;
    int  mayoPromedio = 0;

//Ingreso de datos, acumulador de numeros para calcular promedio
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        nVector[i] = numero;
        suma += nVector[i];
    }
// Calculo de promedio
    promedio =  suma / 10;

// Comparacion de numeros mayores al promedio
    for (int i = 0; i < 10; i++)
    {
        if(nVector[i] > promedio){
            mayoPromedio ++;
        }
    }
    
    cout << "El promedio de los numeros es: " << promedio << endl;
    cout << "Los numeros mayores al promedio son: " << mayoPromedio << endl;
    
    return 0;
}