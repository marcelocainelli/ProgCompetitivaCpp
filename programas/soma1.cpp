#include <iostream>

using namespace std;

int main(){
    int N;
    int soma=0;
    int valor;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> valor;
        soma=soma+valor;
    }
    cout << soma << endl;
}