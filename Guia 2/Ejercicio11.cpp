#include <iostream>

using namespace std;

int main(){

    int n1,n2,n3,n4,n5;
    int cp = 0, cn= 0, cc=0;

    cout << "Ingrese el primer numero: ";
    cin >> n1;

    if(n1 > 0){
        cp++;
    }else{
        if(n1 < 0){
            cn++;
        }
        else{
            cc++;
        }
    }

    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    if(n2 > 0){
        cp++;
    }else{
        if(n2 < 0){
            cn++;
        }
        else{
            cc++;
        }
    }
    cout << "Ingrese el tercer numero: ";
    cin >> n3;

    if(n3 > 0){
        cp++;
    }else{
        if(n3 < 0){
            cn++;
        }
        else{
            cc++;
        }
    }
    cout << "Ingrese el cuarto numero: ";
    cin >> n4;

    if(n4 > 0){
        cp++;
    }else{
        if(n4 < 0){
            cn++;
        }
        else{
            cc++;
        }
    }
    cout << "Ingrese el quinto numero: ";
    cin >> n5;

    if(n5 > 0){
        cp++;
    }else{
        if(n5 < 0){
            cn++;
        }
        else{
            cc++;
        }
    }
    
    cout << "La cantidad de numeros positivos es : " << cp << endl;
    cout << "La cantidad de numeros negativos es: " << cn << endl;
    cout << "La cantidad de numeros ceros es: " << cc;

    return 0;
}