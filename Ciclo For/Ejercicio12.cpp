#include <iostream>

using namespace std;

int main(){

    int n, maxNegativo, minPositivo;

    cout << "Ingrese un numero: ";
    cin >> n;

    maxNegativo = n;
    minPositivo = n;

    for (int i = 0; i < 9; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        if(n < 0){
            maxNegativo = n;
        }
        if(n > 0 && n < minPositivo){
            minPositivo = n;
        }
    }
    cout << "Maximo negativo: " << maxNegativo << endl;
    cout << "Minimo positivo: " << minPositivo;
    
    

    return 0;
}