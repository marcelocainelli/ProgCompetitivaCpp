#include <iostream>
#include <algorithm>    
#include <vector>

using namespace std;

int main(){
    int n,m,valor;
    vector<int> pontos;

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> valor;
        pontos.push_back(valor);
    }
    
    sort(pontos.begin(),pontos.end());
    reverse(pontos.begin(),pontos.end());

    for(int i=0;i<m;i++){
        cout << pontos[i] << endl;
    }

    return 0;
}