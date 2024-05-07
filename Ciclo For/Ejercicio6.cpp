#include <iostream>

using namespace std;

int main(){

    int n, par = 0, n1;

    cout << "Ingrese N cantidad : " ;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: " ;
        cin >> n1;

        if(n1 % 2 == 0){
            par++;
        }
    }

    cout << "La cantidad de numeros pares son: " << par << endl;
    

    return 0;
}