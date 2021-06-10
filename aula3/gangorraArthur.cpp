#include <iostream>

using namespace std;

int main()
{

    int P1, C1, P2, C2, Resultado = 0;

    cin >> P1 >> C1 >> P2 >> C2;

    if (P1 * C1 == P2 * C2)
    {

        Resultado = 0;
    }

    else if (P1 * C1 > P2 * C2)
    {

        Resultado = -1;
    }

    else if (P1 * C1 < P2 * C2)
    {

        Resultado = 1;
    }

    cout << Resultado << endl;

    return 0;
}