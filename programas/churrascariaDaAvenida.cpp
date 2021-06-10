#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int N, K;
    int nIt;

    while (true)
    {
        scanf("%i%i",&N,&K);
        if (N == 0 && K == 0)
        {
            break;
        }
        nIt = N - K + 1;
        int resposta[nIt];
        int entrada[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%i",&entrada[i]);
        }

        for (int i = 0; i < nIt; i++)
        {

            int vetor[K];
            for (int cont = 0; cont < K; cont++)
            {
                vetor[cont] = entrada[i + cont];
            }
            sort(&vetor[0],&vetor[K]);
            resposta[i] = vetor[0];
        }

        for (int i = 0; i < nIt; i++)
        {
            printf("%i",resposta[i]);
            if(i<nIt-1){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}