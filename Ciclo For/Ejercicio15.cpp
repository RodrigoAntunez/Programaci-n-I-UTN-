#include <iostream>

using namespace std;

int main(){

    int n, anterior = 0; 
    bool ordenado = false;

    cout << "Ingrese un numero: " ;
    cin >> n;

    //anterior = n;

    for (int i = 0; i < 7; i++)
    {
        cout << "Ingrese un numero: " ;
        cin >> n;

        if(n >= anterior){
            ordenado = true;
        }
        anterior = n;
    }

    if(ordenado){
        cout << "El conjunto es ordenado";
    }else{
        cout << "No es ordenado";
    }
    

    return 0;
}