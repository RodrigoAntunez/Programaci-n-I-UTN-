#include <iostream>

using namespace std;

int main(){

    int numero1, numero2, numero3,numero4, numero5, max, min;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;
    cout << "Ingrese el cuarto numero: ";
    cin >> numero4;
    cout << "Ingrese el quinto numero: ";
    cin >> numero5;

    if(numero1 > numero2){
        max = numero1;
        min = numero2;
    }else{
        max = numero2;
        min = numero1;
    }

    if(max > numero3){
        // max = max;
        if(min > numero3){
            min = numero3;
        }
    }else{
        max = numero3;
    }
    if(max > numero4){
        // max = max;
        if(min > numero4){
            min = numero4;
        }
    }else{
        max = numero4;
    }
    if(max > numero5){
        // max = max;
        if(min > numero5){
            min = numero5;
        }
    }else{
        max = numero5;
    }

    cout << "El numero mayor es : " << max << endl;
    cout << "El numero menor es: " << min << endl;


    return 0;
}