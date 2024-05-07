#include <iostream>

using namespace std;

int main(){

    int importe, descuento, importeFinal;

    cout << "Ingrese el importe: ";
    cin >> importe;

    if(importe > 100 && importe < 500){
        descuento = importe - (importe * 10 /100);
        // importeFinal = importe - descuento;
        cout << descuento;
    }else if(importe < 100){
        descuento = importe - (importe * 5 /100);
        // importeFinal = importe - descuento;
        cout << descuento;
    }else{
        descuento = importe - (importe * 15 / 100);
        // importeFinal = importe - descuento;
        cout << descuento;
    }

    return 0;
}