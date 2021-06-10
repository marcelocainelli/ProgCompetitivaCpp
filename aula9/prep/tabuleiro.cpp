#include <iostream>
#include <vector>

using namespace std;

int vizinhocommenos(int a, int b, int c){
    int menor;
    if((a == 0 && b == 0) || (a == 0 && c == 0 ) || (b==0 && c==0)){
        menor = 1;
    }else{
        menor = 0;
    }
    return menor;

}

int main(){
    int n,valorTabuleiro;
    cin >> n;
    int tabuleiro[n][n];

    // read information
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> tabuleiro[i][j];
        }   
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if(tabuleiro[i][j] == 9){     
                tabuleiro[i][j] = vizinhocommenos(tabuleiro[i-1][j-1],tabuleiro[i-1][j],tabuleiro[i][j-1]);
            }
        }   
    }

    cout << tabuleiro[n-1][n-1] << endl;

    return 0;
}