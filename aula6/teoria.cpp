#include <iostream>
using namespace std;

int main()
{

    int n;
    int soma = 0;

    cin >> n;

    int vetor[n];

    //lendo o vetor
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    // definição do vetor
    int numeros[6];

    numeros[0] = 34;
    numeros[1] = 6;
    numeros[2] = 10;
    numeros[3] = 8;
    numeros[4] = 17;
    numeros[5] = 13;

    // apresentar o vetor
    for (int i = 0; i < 6; i++)
    {
        cout << numeros[i] << endl;
    }

    //somar todos os elementos
    for (int i = 0; i < 6; i++)
    {
        soma += numeros[i];
    }

    cout << soma << endl;

    int maior = 0;
    //apresentar o maior do vetor
    for (int i = 0; i < 6; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }
    cout << maior << endl;

    return 0;
}