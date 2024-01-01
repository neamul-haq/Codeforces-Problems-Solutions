#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;

long long int visited[N+5],cost[N+5];

vector<int>adj_list[N];

long long int bfs(int src)
{
    queue<int>q;
    visited[src]=1;
    long long int costs=cost[src];
    q.push(src);

    while(!q.empty())
    {
        long long int head = q.front();
        q.pop();


        for(int adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                q.push(adj_node);
                costs = min(costs, cost[adj_node]);
            }
        }
    }
    return costs;
}

int main()
{
    long long int nodes, edges, totalCost=0;
    cin >> nodes >> edges;

    for(int i=1; i<=nodes; i++)
    {
        cin >> cost[i];
    }

    for( int i=0; i<edges; i++)
    {
        int u , v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    for(int i=1; i<=nodes; i++)
    {
        if(visited[i]==0)
        {
            long long int costs = bfs(i);
            totalCost+=costs;
        }
    }
    cout << totalCost << "\n";
    return 0;
}
