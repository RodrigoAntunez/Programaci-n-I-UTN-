#include <iostream>
using namespace std;

int main(){

    /*
    Se dispone de una lista de 10 grupos de números enteros separados entre ellos por ceros. Se pide determinar e informar:

    a) Informar el promedio de cada grupo. Se informa 1 resultado por cada grupo.
    b) Determinar e informar el valor mínimo de todos los grupos, indicando en qué grupo se encontró y su posición relativa en el mismo. 
    Se informan 3 resultados al final.
    c) El mayor de los promedios y a que grupo pertenecía. Se informan 2 resultados al final.

    */

    int n, acumulador, contador, valorMinimo, grupo, posicion, promedioGrupo = 0, grupoMinimo;

    for (int i = 1; i <= 2; i++)
    {
        contador = 0;
        acumulador = 0;
        posicion = 1;
        //vueltaMinimo = i;
        grupo = 0;

        cout << "Ingrese un numero: ";
        cin >> n;
        
        grupo++;
        
        while (n != 0)
        {
            acumulador += n;
            contador++;
            posicion++;
            //grupo ++;

            promedioGrupo = float (acumulador / contador);

            if(n < valorMinimo){
                valorMinimo = n;
                grupoMinimo = grupo;
            }
            

            cout << "Ingrese un numero: ";
            cin >> n;

        }
        cout << "Promedio del grupo: " << promedioGrupo << endl;
        
    }

        cout << "El valor minimo de todos los grupos es: " << valorMinimo << " y se encuentra en el grupo: " << grupoMinimo << " en la posicion: " << posicion << endl;

    return 0;
}