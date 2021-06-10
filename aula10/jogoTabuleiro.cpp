#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int tabuleiro[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tabuleiro[i][j];
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (tabuleiro[i][j] == 9)
            {
                int soma = tabuleiro[i - 1][j] + tabuleiro[i - 1][j - 1] + tabuleiro[i][j - 1];

                if (soma <= 1)
                {
                    tabuleiro[i][j] = 1;
                }
                else
                {
                    tabuleiro[i][j] = 0;
                }
            }
        }
    }
    cout << tabuleiro[n-1][n-1] << endl;
    return 0;
}