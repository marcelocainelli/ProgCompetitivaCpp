//4
//4 5 3 1
//1 2 3 4
//10
//9 8 7 6 1 4 3 2 12 10
//1 2 3 4 5 6 7 8  9 10
//0
#include <iostream>
using namespace std;

int main()
{
    int n, numeroIngresso, vencedor,contador=0;

    while (true)
    {
        contador++;
        cin >> n;
        if(n==0){
            break;
        }

        for (int i = 1; i <= n; i++)
        { //1, 2, 3..
            cin >> numeroIngresso;
            if (numeroIngresso == i)
            {
                vencedor = numeroIngresso;
            }
        }

        
        cout << "Teste " << contador << endl;
        cout << vencedor << endl << endl;
    }

    return 0;
}