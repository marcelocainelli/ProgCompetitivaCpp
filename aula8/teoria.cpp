// [ 2  6  3  5  1 ]
//   0  1  2  3  4

// [ 1 2 3 5 6 ]
// [ 6 5 3 2 1 ]

// 5 
// 6
// 5
// 3
// 2
// 1

#include <iostream>
#include <algorithm> // sort, reverse
#include <vector> // vector<int>

using namespace std;

int main(){
    int n,valor;
    vector<int> valores;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> valor;
        valores.push_back(valor); // [ 6 ] <-
                                  // [ 6 5 ] <-    
    }
    cout << endl;
    // print do vetor nao ordenado
    for(int i=0;i<n;i++){
        cout << valores[i] << endl;
    }

    sort(valores.begin(),valores.end());
    cout << endl;
    // print do vetor ordenado
    for(int i=0;i<n;i++){
        cout << valores[i] << endl;
    }

    cout << endl;
    reverse(valores.begin(),valores.end());
    for(int i=0;i<n;i++){
        cout << valores[i] << endl;
    }


    return 0;
}
