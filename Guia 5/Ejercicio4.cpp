#include <iostream>
using namespace std;

int redondear(float n1){
    return n1 + 0.5;
}

int main(){

    float n1;

    cout << "Ingrese un numero decimal: ";
    cin >> n1;

    cout << "El numero redondeado es: " << redondear(n1) << endl;

    return 0;
}