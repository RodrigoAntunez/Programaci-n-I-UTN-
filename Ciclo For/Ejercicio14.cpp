#include <iostream>

using namespace std;

int main(){

    int n, impar1 = 0, impar2 = 0, imparA = 0, imparU = 0;
    bool b1 = false, b2 = false, bA = false, bU = false;

    for (int i = 0; i < 7; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        if(n % 2 != 0 && b1 == false){
            impar1 = n;
            b1 = true; 
        }else if(n % 2 != 0 && b2 == false){
            impar2 = n;
            b2 = true;
        }else if(n % 2 != 0 && bA == false){
            imparA = n;
            bA = true;
        }else if(n % 2 != 0 && bU == false){
            imparU = n;
            bU = true;
        }
    }
    
    cout << "El primer impar es: " << impar1 << endl;
    cout << "Segundo impar es: " << impar2 << endl;
    cout << "Anteultimo impar es: " << imparA << endl;
    cout << "Ultimo impar: "<< imparU << endl;

    return 0;
}