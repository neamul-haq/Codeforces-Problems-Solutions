#include<bits/stdc++.h>
using namespace std;

const int N=1e4;

int visited[N];
int level[N];
vector<int>adj_list[N];

int bfs(int src)
{
    queue<int>q;
    visited[src]=1;
    level[src]=1;
    q.push(src);
    int mxlvl=1;

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        for(int adj_node:adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                q.push(adj_node);
                level[adj_node] = level[head] + 1;
                mxlvl = max(mxlvl,level[adj_node]);
            }
        }
    }
    return mxlvl;
}

int main()
{
    int nodes,maxEmp=INT_MIN;
    cin >> nodes ;
    vector<int>root;
    for(int i=1; i<=nodes; i++)
    {
        int u ;
        cin >> u ;
        if(u>0){
            adj_list[u].push_back(i);
            adj_list[i].push_back(u);
        }
        else{
            root.push_back(i);
        }
    }

    for(int i=0; i<root.size(); i++)
    {
        maxEmp = max(maxEmp, bfs(root[i]));
    }
    cout << maxEmp << "\n";
    return 0;
}
