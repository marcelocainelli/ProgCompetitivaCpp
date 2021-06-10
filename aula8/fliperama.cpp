#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,m,ponto;
    vector<int> pontos;

    cin >> n >> m;

    for(int i=0;i<n;i++){
        cin >> ponto;
        pontos.push_back(ponto);
    }  

    sort(pontos.begin(),pontos.end());
    reverse(pontos.begin(),pontos.end());

    for(int i=0;i<m;i++){
        cout << pontos[i] << endl;
    }

    return 0;
}