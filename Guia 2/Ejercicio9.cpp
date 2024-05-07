#include <iostream>

using namespace std;

int main(){

    int numero1, numero2, numero3, max;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    if(numero1 > numero2){
        max = numero1;
    }else{
        max = numero2;
    }
    if(max > numero3){
        cout << "El numero mas grande es: " << max <<endl; 
    }else{
        max = numero3;
        cout << "El numero mas grande es: " << max <<endl;
    }


    return 0;
}