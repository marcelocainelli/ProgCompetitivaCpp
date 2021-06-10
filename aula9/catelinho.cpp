#include <iostream>
#include <vector>

using namespace std;
/*
            [ 1 ] -> <- [ 2 ] [ 1 ] = [ 2 ] 
            [ 2 ] -> <- [ 5 ] [ 2 ] = [ 1 ][ 4 ][ 5 ]
            [ 2 ] -> <- [ 4 ] [ 3 ] = [ 4 ]
            [ 4 ] -> <- [ 3 ] [ 4 ] = [ 2 ][ 3 ]
            
            5 2
            1 2
            2 5  
            2 4  
            4 3  
            5 3 1  
            2 4 3

*/
vector< int> Grafo;
vector<int> coresGrafo;
vector<bool> visitado;
int pintaGrafo(int p, int q, int c);


int pintaGrafo(int p, int q, int c)
{
    visitado[p] = true;
    if (p == q)
    {
        coresGrafo[q] = c;
        return 1;
    }

    for (int i = 0; i < Grafo[p].size(); i++)
    {
        if (!visitado(Grafo[p][i]))
        {
            pintaGrafo(Grafo[p][i], q, c);
        }
    }
    coresGrafo[p] = c;
    return 1;
}

int main()
{
    int n, m, u, v, p, q, c;
    cin >> n >> m;
    //inicializando todas as pintura com 0
    //cores possiveis para a pintura 0,1,2,3
    for (int i = 0; i < n; i++)
    {
        coresGrafo[i].push_back(0);
    }
    for (int i = 0; i < n; i++)
    {
        visitado[i].push_back(false);
    }
    //lendo valores do grafo
    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        //construindo o grafo
        Grafo[u].push_back(v);
        Grafo[v].push_back(u);
    }
    //lendo as ordens de pintura
    for (int i = 0; i < m; i++)
    {
        cin >> p >> q >> c;
        pintarGrafo(p, q, c);
    }

    //Apresentando o vetor do grafico com as cores pintadas
    for (int i = 0; i<n; i++)
    {
        cout << coresGrafo[i] << endl;
    }

    return 0;
}