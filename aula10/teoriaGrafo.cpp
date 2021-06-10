// Grafos - DFS (busca em profundidade)
 
#include <iostream>
#include <list>
#include <algorithm> // função find
#include <stack> // pilha para usar na DFS
#include <vector>

using namespace std;
 
vector<int> adj[128];
bool visitados[128];


void dfs(int v, int u ,int n)
{
	stack<int> pilha;
    
	// marca todos como não visitados
	for(int i = 0; i < n; i++)
		visitados[i] = false;
 
	while(true)
	{
		if(!visitados[v])
		{
			cout << "Visitando vertice " << v << " ...\n";
			visitados[v] = true; // marca como visitado
			pilha.push(v); // insere "v" na pilha
		}
 
		bool achou = false;        
 
		// busca por um vizinho não visitado
		int i = 0;
        for(i; i<adj[v].size(); i++)
		{
			if(!visitados[adj[v][i]])
			{
				achou = true;
				break;
			}
		}
 
		if(achou)
			v = adj[v][i]; // atualiza o "v"
		else
		{
			// se todos os vizinhos estão visitados ou não existem vizinhos
			// remove da pilha
			pilha.pop();
			// se a pilha ficar vazia, então terminou a busca
			if(pilha.empty())
				break;
			// se chegou aqui, é porque pode pegar elemento do topo
			v = pilha.top();
		}
	}
}
 
int main()
{
    int n,u,v;
	
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
	dfs(3,0,n);
 
	return 0;
}