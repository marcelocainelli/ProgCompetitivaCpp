#include <iostream>

using namespace std;


int main(){

int N;

int soma = 0;
int media = 0;
int maior = 0;

cin >> N;

int vetor[N];


for(int i=0;i<N;i++){
    cin >> vetor[i];
}


for(int i=0;i<N;i++){
    
    soma += vetor[i];

    if(vetor[i]>maior){
        
        maior = vetor[i];
        media = soma / N;
    }


}

cout << maior << endl;
cout << media << endl;
cout << soma << endl;
}