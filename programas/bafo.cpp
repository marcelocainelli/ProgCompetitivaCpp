#include <iostream>
using namespace std;

int main()
{
    int R,sA,sB;
    int A, B;
    int cont=1;
    while (true)
    {
        sA = 0, sB = 0;
        cin >> R;
        if (R == 0)
        {
            break;
        }
        for (int i = 0; i < R; i++)
        {
            cin >> A >> B;
            sA += A;
            sB += B;
        }
        cout << "Teste " << cont <<endl;
        if (sA > sB)
        {
            cout << "Aldo" << endl;
            cout << endl;
        }
        else
        {
            cout << "Beto" << endl;
            cout << endl;
        }
        cont++;
    }

    return 0;
}