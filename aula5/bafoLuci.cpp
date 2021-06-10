#include <iostream>
using namespace std;

int main()
{
    int R, P = 0, A, B, cont = 1, somaA = 0, somaB = 0; //R = rodadas, A= pont de beto, B= pont de aldo, cont= contador, somaA=soma de beto, somaB= soma de aldo

    while (true)
    {
        cin >> R;

        if (R == 0)
            break;

        for (int i = 0; i < R; i++)
        {

            cin >> A >> B;
            somaA += A;
            somaB += B;
        }

        if (somaA > somaB)
        {
            cout << "Teste " << cont << endl;
            cout << "Aldo"
                 << "\n\n";
        }
        else
        {
            cout << "Teste " << cont << endl;
            cout << "Beto"
                 << "\n\n";
        }

        cont++;
        somaA=0;
        somaB=0;
    }

    return 0;
}