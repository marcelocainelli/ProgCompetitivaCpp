#include <iostream>
using namespace std;

int main()
{

    int n, aldo, beto, somaAldo = 0, somaBeto = 0,contador=1;

    while (true)
    {

        cin >> n;
        if(n==0){
            break;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> aldo >> beto;
            somaAldo += aldo;
            somaBeto += beto;
        }
        cout << "Teste "<< contador << endl;
        if (somaAldo > somaBeto)
        {
            cout << "Aldo" << endl;
        }
        else
        {
            cout << "Beto" << endl;
        }
        cout << endl;
        contador++;
        somaAldo=0;
        somaBeto=0;
    }

    return 0;
}