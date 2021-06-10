#include <iostream>
using namespace std;

int main(){
    int N,S,saldoDia,menor=10000;

    cin >> N >> S;

    for(int i=0;i<N;i++){
        cin >> saldoDia;
        S = S + saldoDia;
        if(S<menor){
            menor = S;
        }
    }
    cout << menor << endl;
    return 0;
}