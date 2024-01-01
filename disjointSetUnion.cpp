#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e5+5 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int parent[N], _rank[N];

int findParent(int node)
{
    if(parent[node] == node)
    {
        return node;
    }
    int x = findParent(parent[node]);
    return x;
}

void _union(int a, int b)
{
    a = findParent(a);
    b = findParent(b);

    if(_rank[a]<_rank[b])
    {
        parent[a] = b;
    }
    else if(_rank[a]>_rank[b])
    {
        parent[b] = a;
    }
    else
    {
        parent[b] = a;
        _rank[a]++;
    }
}



int main()
{
    fast()
    ll t=1;
    while(t--) solve();
}

void solve()
{
    int n,m,ans=0;
    cin >> n >> m;

    for(int i=0; i<=N; i++)
    {
        parent[i] = i;
    }

    for(int i=0; i<m; i++)
    {
        string query;
        cin >> query;
        int u, v;
        cin >> u >> v;
        if(query=="union")
        {
            _union(u,v);
        }
        else
        {
            if(findParent(u) != findParent(v))
            {
                cout << "NO" << "\n";
            }
            else
            {
                cout << "YES" << "\n";
            }
        }
    }

}
