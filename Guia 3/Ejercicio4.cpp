#include <iostream>

using namespace std;

int main(){

    /*
    Hacer un programa para que el usuario ingrese un número positivo y que luego se muestre por pantalla los números entre el 1 y el número ingresado por el usuario. 
    Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15
    */
   
    int n1, n;

    n = 1;

    cout << "Ingrese un numero: ";
    cin >> n1;

    while (n1 >= n)
    {
        cout << n;
        n++;
    }
    

    return 0;
}