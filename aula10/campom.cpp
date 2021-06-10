#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int campo[n];
    int saida[n];

    for (int i = 0; i < n; i++)
    {
        cin >> campo[i];
    }

    for(int i =0; i<n;i++){
        int contador = 0;
        if(campo[i-1] == 1 && i>0){
            contador++;
        }
        if(campo[i]==1){
            contador++;
        }
        if(campo[i+1]==1 && i+1<n){
            contador++;
        }
        saida[i] = contador;
    }

    for(int i=0;i<n;i++){
        cout << saida[i] << endl;
    }

    return 0;
}