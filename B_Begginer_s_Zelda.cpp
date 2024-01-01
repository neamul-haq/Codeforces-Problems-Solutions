#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+3;

int visited[N];
int cnt=0;
vector<int> adj_list[N];

void bfs(int src)
{
    queue<int> q;
    visited[src] = 1;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        if(adj_list[head].size()==1) cnt++;
        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nodes, edges, ans = 0;
        cin >> nodes;
        for(int i=0; i<=nodes; i++){
            visited[i] = 0;
            adj_list[i].clear();
        }
        for (int i = 1; i < nodes; i++)
        {
            int u, v;
            cin >> u >> v;
            adj_list[u].push_back(v);
            adj_list[v].push_back(u);
        }
        int src = 1;
        bfs(src);
        cout << (cnt+1)/2 << "\n";
        cnt=0;
    }
}