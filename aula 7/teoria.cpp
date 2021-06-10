#include <iostream>
using namespace std;


// 3 x 4
// l   c

//matriz[3][4]
 //   [ 0   1  2  3] 
// [0] 23  10  4  0 
// [1] 21  12  1  1 
// [2] 56  23  6  1

//matriz[0][0] = 23
//matriz[1][3] = 1
//


//vetor[5] =  [ 2 8 1 3 6]
//vetor[0]

//vetor [ 1 0 0]
//matriz 

int main(){
    int linha,coluna;
    // leitura dos valores
    cin >> linha >> coluna;
    int matrix[linha][coluna];
    int vetorSoma[linha] = {0};


    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){  
            cin >> matrix[i][j];
        }

    }
    // popular o vetor soma
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){  
            vetorSoma[i] += matrix[i][j];
        }
    }

    for(int i=0;i<linha;i++){
        cout << vetorSoma[i] << endl;    
    }
    // apresentar nossa matriz

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){  
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }   

    return 0;
}