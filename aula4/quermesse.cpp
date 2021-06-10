#include <iostream>
using namespace std;

int main()
{

    int n, vencedor, cont = 1;

    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }

        int lista[n];

        for (int i = 1; i <= n; i++)
        {
            cin >> lista[i];
            if (lista[i] == i)
            {
                vencedor = i;
            }
        }
        cout << "Teste " << cont << endl
             << vencedor << endl
             << endl;
        cont++;
    }

    return 0;
}