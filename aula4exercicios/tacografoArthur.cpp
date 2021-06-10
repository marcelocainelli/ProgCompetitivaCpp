#include <iostream>

using namespace std;

int main()
{

    int N;
    int T, V, resultado = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> T >> V;
        resultado += T * V;
    }

    cout << resultado << endl;

    return 0;
}