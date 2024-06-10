#include <iostream>
using namespace std;

int maximoAbsoluto(int n1, int n2){
    int absoluto = n1 - n2;
    return absoluto;
}

int main(){
    
        int n1, n2;
    
        cout << "Ingrese el primer numero: ";
        cin >> n1;
        cout << "Ingrese el segundo numero: ";
        cin >> n2;
    
        cout << "El maximo absoluto es: " << maximoAbsoluto(n1, n2) << endl;
    
        return 0;
}