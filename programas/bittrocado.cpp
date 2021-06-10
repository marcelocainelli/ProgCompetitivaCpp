#include <iostream>
using namespace std;

int main()
{
    int v;
    int cont = 1;

    while(1)
    {
        int i = 0, j = 0, k = 0, l = 0;

        cin >> v;
        if(v==0){
            break;
        }
        // 70  i = 1  j = 2
        while (v > 0)
        {
            if (v >= 50)
            {
                i++;
                v = v - 50;
            }
            else if (v >= 10)
            {
                j++;
                v = v - 10;
            }
            else if (v >= 5)
            {
                k++;
                v = v - 5;
            }
            else if (v >= 1)
            {
                l++;
                v = v - 1;
            }
        }

        clog << "Teste " << endl;
        clog << i << " " << j << " " << k << " " << l << endl << endl;
        cont++;
    }
    return 0;
}