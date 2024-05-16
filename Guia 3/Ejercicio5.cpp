#include <iostream>

using namespace std;

int main(){
    /*
    Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos. Ejemplo, si el usuario ingresa 3 y 15, 
    se mostrarán los números entre el 3 y el 15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
    */

    int n1,n2,nMa, nMe;

    cout << "Ingrese un numero : ";
    cin >> n1;

    cout << "Ingrese otro numero: ";
    cin >> n2;

    if(n1 > n2){
        nMa = n1;
        nMe = n2;
    }else{
        nMa = n2;
        nMe = n1;
    }

    while (nMe <= nMa)
    {
        cout << nMe;
        nMe++;
    }
    

    return 0;
}