#include <iostream>

using namespace std;

int main(){
    
    int numero1, numero2, resultado;

    cout << "Ingrese el primer numero : ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    resultado = numero1 % numero2;

    if(resultado == 0){
        cout << "Es multiplo";
    }else{
        cout << "No es multiplo";
    }
    return 0;
}