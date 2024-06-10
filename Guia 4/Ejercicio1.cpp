#include <iostream>
using namespace std;

int main(){

    /*
    Dada una lista de números compuesta por 10 grupos y cada grupo separado del siguiente por un cero, se pide determinar e informar:

    a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares. Se informan 2 resultados por
    cada grupo.
    b) Para cada uno de los grupos el porcentaje de números negativos y números positivos. Se informan 2 resultados por cada grupo.
    c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1 resultado al final.
    */

    int n, maxPar, maxImpar, positivosTotales = 0, contador, positivos, negativos, porcentajePositivos, porcentajeNegativos;

    for (int i = 0; i <= 10; i++)
    {

        cout << "Ingrese un numero: ";
        cin >> n; 
        
        contador = 0;
        positivos = 0;
        negativos = 0;

        if(n > 0){
            positivosTotales++;
        }
        
        while (n != 0)
        {  
            if(n % 2 == 0 ){
            maxPar = n;
        }else {
            maxImpar = n;
        }

            contador++;
            if(n > 0){
                positivos++;
            }else{
                negativos++;
            }

            if(n > maxPar){
                maxPar = n;
            }
            if(n > maxImpar){
                maxImpar = n;
            }
            porcentajePositivos = (float(positivos) / contador) * 100;
            porcentajeNegativos = (float(negativos) / contador) * 100;
        

        cout << "Ingrese un numero: ";
        cin >> n;
        }
        cout << "Maximo par: " << maxPar << endl;
        cout << "Maximo impar: " << maxImpar << endl;
        cout << "Porcentaje de positivos: " << porcentajePositivos << "%" << endl;
        cout << "Porcentaje de negativos: " << porcentajeNegativos << "%" << endl;
        
    }

    cout << "Cantidad de positivos totales: " << positivosTotales << endl;

    return 0;
}