/*
Neamul Haq
University of Barisal
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define umap unordered_map<ll, ll> m;
#define map map<ll, ll> m;
int const mod = 1e9 + 7;
const ll inf = 1e18;
const ll N = 2e5 + 10;
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define all(x) (x).begin(), (x).end()
void solve();
ll ans = 0;
ll visited[N];
vector<ll> adj_list[N];
vector<ll>leafs(N,0);
void dfs(int node)
{
    visited[node]=1;
    if(adj_list[node].size()==1 && node!=1){
        leafs[node] = 1;
    }
    for(int adj_node : adj_list[node])
    {
        if(visited[adj_node]==0)
        {
            dfs(adj_node);
            leafs[node]+=leafs[adj_node];
        }
        
    }

}
int main()
{
    fast()
        ll t = 1;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        visited[i] = 0;
        adj_list[i].clear();
        leafs[i]=0;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    dfs(1);
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y, s, s2;
        cin >> x >> y;
        cout << leafs[x]*leafs[y] << ndl;
    }
    // for(int i=1; i<=n; i++){
    //     cout << leafs[i] << ndl;
    // }
}