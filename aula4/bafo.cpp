#include <iostream>

using namespace std;

int main()
{

    int r, a, b, somaA, somaB;
    int cont = 1;
    string vencedor;

    while (true)
    {

        somaA = 0;
        somaB = 0;

        cin >> r;
        if (r == 0)
        {
            break;
        }

        for (int i = 0; i < r; i++)
        {
            cin >> a >> b;
            somaA += a;
            somaB += b;
        }
        
        if (somaA > somaB)
        {
            vencedor="Aldo";
            
        }
        else
        {
            vencedor = "Beto";
            
        }
        cout << "Teste " << cont << endl;
        cout << vencedor << endl << endl;
        cont++;
    }

    return 0;
}