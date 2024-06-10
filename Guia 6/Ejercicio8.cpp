#include <iostream>
using namespace std;

int main(){
    int nVector[3], numero, maximo = 0;
    int vectorMaximos[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        nVector[i] = numero;
        maximo = numero;
        while (numero != 0)
        {
            cout << "Ingrese un numero: ";
            cin >> numero;
            if(numero > maximo){
                maximo = numero;
            }
            
        }
        vectorMaximos[i] = maximo;
        
        
        cout << "Corte el while" << endl;
    }
    for (int i = 0; i < 3; i++)
        {
            cout << "El maximo del grupo es: " << vectorMaximos[i] << endl;
        }

}