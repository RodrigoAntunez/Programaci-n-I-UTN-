#include <iostream>

using namespace std;

int main(){

    int n, maxPares = 0, par = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        if(n % 2 == 0){
            par = n;
        }
        if(par > maxPares){
            maxPares = n;
        }
    }
    cout << "El numero par mas grande es: " << maxPares;

    return 0;
}