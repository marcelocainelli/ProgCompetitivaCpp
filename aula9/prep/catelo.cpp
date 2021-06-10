#include <bits/stdc++.h>
#include <iostream>
#include <list>
#include <algorithm>
#include <stack>

using namespace std;

vector<int> adj[128];
int colour[128], mark[128],t=0;

bool dfs(int u, int v, int c)
{
    bool paint = 0;
    mark[u] = t;
    if (u == v)
    {
        colour[v] = c;
        return 1;
    }
    cout << adj[u].size() << ' ' << endl;
    for (int i = 0; i < adj[u].size(); ++i)
        if (mark[adj[u][i]] != t)
            paint |= dfs(adj[u][i], v, c);
    if (paint)
        colour[u] = c;
    return paint;
}


int main()
{
    int n, m, u, v, c;
    cin >> n >> m;
    for (int i = 1; i < n; ++i)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
     for (int i = 1; i < n; ++i)
    {
        cout << adj[u][i] << endl;
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> u >> v >> c;
        ++t;
        dfs(u, v, c);
    }

    for (int i = 1; i <= n; ++i)
        cout << colour[i] << " ";
    cout << "\n";
    return 0;
}
