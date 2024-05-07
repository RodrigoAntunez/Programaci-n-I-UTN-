#include <iostream>

using namespace std;

int main(){

    int n1,n2,n3,n4;

    cout << "Ingrese la primer nota de examen: ";
    cin >> n1;
    cout << "Ingrese la segunda nota de examen: ";
    cin >> n2;
    cout << "Ingrese la tercer nota de examen: ";
    cin >> n3;
    cout << "Ingrese la cuarta nota de examen: ";
    cin >> n4;

    if((n1 >= 7) && (n2 >=7) && (n3 >=7) && (n4 >= 7)){
        cout << "Promociona";
    } else if((n1 >= 4 && n2 >= 4 && n3 >= 4) || (n1 >= 4 && n2 >= 4 && n4 >= 4) || (n1 >= 4 && n3 >= 4 && n4 >= 4) || (n2 >= 4 && n3 >= 4 && n4 >= 4)){
        cout << "Rinde final";
    }else if(n1 >= 4 || n2 >= 4 || n3 >= 4 || n4 >= 4){
        cout << "Recupera parcial";
    }else{
        cout << "Recupera la materia";
    }

    return 0;
}