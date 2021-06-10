#include <iostream>
using namespace std;

int main()
{
    int v; //se o v = 0 termina a entrada
    int e;
    int i = 0, j = 0, k = 0, l = 0;
    int c;

    
    for (c = 1;; c++)
    {
        cin >> e;
        v=e;
        if(e==0){
            break;
        }
        while(v>0)
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
        
        cout << "Teste " << c << "\n " << i << " " << j << " " << k << " " << l << " " << endl;
        i=0;j=0;k=0;l=0;
        cout << endl;
        

    }
    return 0;
}