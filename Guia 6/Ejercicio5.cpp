#include <iostream>
using namespace std;

int main(){
    int nVector[10];
    int numero, parMaximo = 0, imparMenor = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        nVector[i] = numero;

        if(nVector[i] % 2 == 0){
            parMaximo = nVector[i];
        }
        if(nVector[i] % 2 != 0){
            imparMenor = nVector[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if(nVector[i] % 2 == 0){
            if(nVector[i] > parMaximo){
                parMaximo = nVector[i];
            }
        }
        if(nVector[i] % 2 != 0){
            if(nVector[i] < imparMenor){
                imparMenor = nVector[i];
            }
        }
    }
    cout << "El numero par mayor es: " << parMaximo << endl;
    cout << "El numero impar menor es: " << imparMenor << endl;
}