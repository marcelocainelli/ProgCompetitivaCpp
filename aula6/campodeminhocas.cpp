#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int maiorValor =0;
    cin >> n >> m;

    int matrizMinhocas[n][m];

    int somaLinhas[n];
    int somaColunas[m];

    for (int i = 0; i < n; i++)
    {
        somaLinhas[i] = 0;

        for (int j = 0; j < m; j++)
        {
            cin >> matrizMinhocas[i][j];
            somaLinhas[i] += matrizMinhocas[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        somaColunas[j] = 0;
        for (int i = 0; i < n; i++)
        {
            somaColunas[j] += matrizMinhocas[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(somaLinhas[i]>maiorValor){
            maiorValor = somaLinhas[i];
        }
  //      cout << somaLinhas[i] << endl;
    }
   // cout << "\n";
    for (int j = 0; j < m; j++)
    {
        if(somaColunas[j]>maiorValor)
        {
            maiorValor = somaColunas[j];
        }
     //   cout << somaColunas[j] << endl;
    }

    cout << maiorValor << endl;
    return 0;
}