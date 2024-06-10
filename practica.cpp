#include <iostream>
using namespace std;

bool esprimo(int n)
{
        int cont=0;

       for(int i=1; i<=n; i++)
       {
        if(n%i==0){
        cont++;
        }
       }

       if(cont == 2){
        return true;
       }
       else{
        return false;
       }
}

int main()
{       
    int numero;
    cout << "ingrese un numero:" << endl;
    cin >> numero;

    if(esprimo(numero)){
        cout<< "EL NUMERO INGRESADO ES PRIMO:" << endl;
    }else{
    cout << "el numero no es primo;" << endl;
    }
    return 0;
}