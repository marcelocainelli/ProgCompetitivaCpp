#include <iostream>

using namespace std;

int main(){
    int n
    cin >> n;
    int entrada[128], saida[128];

    for(int i=1;i<=n;i++){
        cin >> entrada[i];
    }
    for(int i=1;i<=n;i++){
        int cont=0;
        if(entrada[i]==1){
            cont++;
        }
        if(entrada[i-1] == 1){
            cont++;
        }
        if(entrada[i+1] == 1){
            cont++;
        }
        saida[i] = cont;
    }

    for(int i=0;i<n;i++){
        cout << saida[i] << endl;
    }

    return 0;
}