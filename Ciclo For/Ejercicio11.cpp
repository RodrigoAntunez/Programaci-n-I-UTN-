#include <iostream>

using namespace std;

int main(){

    int n, max, min;

    cout << "Ingrese un numero: " ;
    cin >> n;

    max = n;
    min = n;

    for (int i = 0; i < 9; i++)
    {
        cout << "Ingrese un numero: " ;
        cin >> n;

        if(n > max){
            max = n;
        }
        if(n < min){
            min = n;
        }
    }
    
    cout << "El numero mas grande es: " << max << endl;
    cout << "El numero mas chico es: " << min << endl;

    return 0;
}