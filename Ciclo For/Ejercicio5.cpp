#include <iostream>

using namespace std;

int main(){

    int n1, n2, min, max;

    cout << "Ingrese el primer numero: " ;
    cin >> n1;

    cout << "Ingrese el segundo numero: " ;
    cin >> n2;

    if(n1 > n2){
            max = n1;
            min = n2;
        }else{
            max = n2;
            min = n1;
        }

    for (int i = min; i <= max; i++)
    {
        
        cout << i << endl;
    }
    

    return 0;
}