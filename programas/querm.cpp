#include <iostream>

using namespace std;

int main()
{

    int N;
    int cont=1;
    while (true)
    {
        cin >> N;
        if(N==0){
            break;
        }
        int valores[N];
        int vencedor;
        for (int i = 0; i < N; i++)
        {
            cin >> valores[i];
            if (i + 1 == valores[i])
            {
                vencedor = valores[i];
            }
        }
        cout << "Teste "<< cont << "\n" << vencedor << endl;
        cont++;
    }

    return 0;
}