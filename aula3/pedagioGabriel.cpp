#include <iostream>
using namespace std;

int main(){

    int l,d,k,p;
    int qtdPedagios;
    int resultado;

    cin >> l >> d >> k >> p;
    qtdPedagios = l/d;
    resultado = l * k + qtdPedagios * p;
    cout << resultado << endl;
    return 0;
}