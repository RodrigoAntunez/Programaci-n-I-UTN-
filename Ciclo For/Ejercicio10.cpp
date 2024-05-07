#include <iostream>

using namespace std;

int main(){

    int n, max, pos = 1;

    cout << "Ingrese un numero : ";
    cin >> max;

    for (int i = 1; i < 10; i++)
    {
        cout << "Ingrese un numero : ";
        cin >> n;

        if(n > max){
            max = n;
            pos = i+1;
        }
    }
    
    cout << "El numero mayor es: " << max << " en la posicion " << pos;

    return 0;
}