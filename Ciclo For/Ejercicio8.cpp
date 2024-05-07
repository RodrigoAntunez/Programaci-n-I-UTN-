#include <iostream>

using namespace std;

int main(){

    int n, pos = 0, negativos = 0, cero = 0; 
    float porPositvo, porNegativos, porCero;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingresar un numero: ";
        cin >> n; 

        if(n > 0){
            pos++;
        }else if(n < 0){
            negativos ++;
        }else{
            cero ++;
        }
    }

    porPositvo = float (pos * 100) / 10;
    porNegativos = float (negativos * 100)/ 10;
    porCero = float (cero * 100) / 10;

    cout << "El porcentaje de numeros positivos es: " << porPositvo << endl;
    cout << "El porcentaje de numeros negativos es: " << porNegativos <<endl;
    cout << "El porcentaje de numeros ceros es: " <<porCero << endl;

    return 0;
}