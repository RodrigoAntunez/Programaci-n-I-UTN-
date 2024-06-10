#include <iostream>
using namespace std;

int dia(int numeroDia){
    switch(numeroDia){
        case 0:
            cout << "Domingo";
            break;
        case 1:
            cout << "Lunes";
            break;
        case 2:
            cout << "Martes";
            break;
        case 3:
            cout << "Miercoles";
            break;
        case 4:
            cout << "Jueves";
            break;
        case 5:
            cout << "Viernes";
            break;
        case 6:
            cout << "Sabado";
            break;
    }
}

int main(){
    
        int numeroDia;
    
        cout << "Ingrese un numero del 0 al 6: ";
        cin >> numeroDia;
    
        dia(numeroDia);
    
        return 0;
}