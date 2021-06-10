//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//using namespace std;

int main()
{
    int N, K;

    while(1)
    {
        scanf("%i%i",&N,&K);
        if (N == 0 && K == 0)
        {
            break;
        }
        int nIt = N - K + 1;
        int resposta[nIt];
        int entrada[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%i",&entrada[i]);
        }

        for (int i = 0; i < nIt; i++)
        {

            int vetor[K];
            int menor = 99;
            for (int cont = 0; cont < K; cont++)
            {
                vetor[cont] = entrada[i + cont];
            }

            for (int j = 0; j < K; j++)
            {
                if (vetor[j] < menor)
                {
                    menor = vetor[j];
                }
            }
            resposta[i] = menor;
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