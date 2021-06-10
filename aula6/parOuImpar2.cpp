#include <iostream>
using namespace std;

int main()
{
     int n;
     int cont = 1;

    while (true)
    {

        string nome1, nome2;

        cin >> n >> nome1 >> nome2;

        if(n==0){
            break;
        }

        int numero1, numero2;
        string vencedores[n];

        for (int i = 0; i < n; i++)
        {
            cin >> numero1 >> numero2;
            if ((numero1 + numero2) % 2 == 0)
            {
                vencedores[i] = nome1;
            }
            else
            {
                vencedores[i] = nome2;
            }
        }

        cout << "Teste "<< cont << endl;
        for (int i = 0; i < n; i++)
        {
            cout << vencedores[i] << endl;
        }
        cout << endl;
        cont++;
    }
    return 0;
}