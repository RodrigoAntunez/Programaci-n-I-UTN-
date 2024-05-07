#include <iostream>

using namespace std;

int main(){

    int lado1, lado2, lado3;

    cout<< "Ingrese la longitud del primer lado: ";
    cin >> lado1;

    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;

    cout << "Ingrese la longitud del tercer lado: ";
    cin >> lado3;

    if(lado1 == lado2 && lado2 == lado3){
        cout << "Es equilatero";
    }else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        cout << "Es isoceles";
    }else{
        cout << "Es escaleno";
    }

    return 0;
}