#include <iostream>

using namespace std;

int main(){

    int pos = 0, neg = 0, cero = 0, n;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingresar un numero: ";
        cin >> n; 

        if(n > 0){
            pos++;
        }else if(n < 0){
            neg ++;
        }else{
            cero ++;
        }
    }

    cout << "La cantidad de numeros positivos es: " << pos << endl;
    cout << "La cantidad de numeros negativos es: " << neg << endl;
    cout << "La cantidad de numeros ceros es: " << cero;
    

    return 0; 
}