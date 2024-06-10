#include <iostream>
using namespace std;

int main(){
    int nVector[10];

    for (int i = 0; i < 10; i++)
    {
        nVector [i + 1] = i % 2;
    }

    for (int i = 10; i > 0; i--)
    {
        cout << nVector[i] << endl;
    }
    
}