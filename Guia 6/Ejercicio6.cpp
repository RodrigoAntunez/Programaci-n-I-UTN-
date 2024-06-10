#include <iostream>
using namespace std;

int main(){
    int nVector[10];
    int numero, ultimoPar = 0, anteUltimoPar = 0;
    bool banderaUltimo = false, banderaPenultimo = false;

    for(int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;
        nVector[i] = numero;
    }
    
    for (int i = 10; i > 0; i--)
    {
        if(nVector[i] % 2 == 0 && banderaUltimo == false){
            banderaUltimo = true;
            ultimoPar = nVector[i];
        }else if(nVector[i] % 2 == 0 && banderaPenultimo == false){
            banderaPenultimo = true;
            anteUltimoPar = nVector[i];
        }
    }
    
    cout << "El penultimo numero par es: " << anteUltimoPar << endl;
    cout << "El ultimo numero par es: " << ultimoPar << endl;

    return 0;
}