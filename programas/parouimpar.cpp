#include <iostream>
using namespace std;

int main()
{
    int cont =1;
    while (true)
    {

        int N;
        string nome1, nome2;
        cin >> N;
        if (N == 0)
        {
            break;
        }
        int val1[N], val2[N];
        string res[N];
        cin >> nome1 >> nome2;

        for (int i = 0; i < N; i++)
        {
            cin >> val1[i] >> val2[i];
            if ((val1[i] + val2[i]) % 2 == 0)
            {
                res[i] = nome1;
            }
            else
            {
                res[i] = nome2;
            }
        }
        cout << "Teste "<< cont << endl;
        for (int i = 0; i < N; i++)
        {
            cout << res[i] << endl;
        }
        cout << endl;
        cont++;
    }

    return 0;
}