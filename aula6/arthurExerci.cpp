#include <iostream>
using namespace std;

int main()
{


int N;

int media = 0;
int maior = 0;
int soma = 0;
int i;

cin >> N;

int vetor[N];


for(i = 0;i < N;i++){

    cin >> vetor[i];

}



for (i = 0; i < N; i++)
{

    
    soma += vetor[i];

    if(maior < vetor[i]){

        maior = vetor[i];
    }
}

media = soma / 3;;

cout << soma << endl;
cout << media << endl;
cout << maior << endl;




return 0;
}