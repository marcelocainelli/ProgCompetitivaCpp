#include <iostream>
using namespace std;

int main(){

    int N, T, V,soma=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> T >> V;
        soma = soma + (T*V);
    }
    cout << soma << endl;
    return 0;
}