/*
Problem_Link:https://codeforces.com/problemset/problem/1851/E
AUTHOR: Neyamul_Haq
CREATED: 04-01-2024  14:26:06
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
#define nl '\n'
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define   Pi     2*acos(0.0)
#define   mem(a,v)   memset(a,v,sizeof(a))
#define sz(a) (int)(a).size()
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 2e5+5 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
vector<ll>cost(N);
ll n,k;
bool visited[N];

vector<ll>adj_list[N];

void dfs(ll node)
{
    visited[node]=true;
    ll sum=0;
    bool haschild = false;
    for(int adj_node : adj_list[node])
    {
        haschild = true;
        if(visited[adj_node]==0)
        {
            dfs(adj_node);
        }
        sum+=cost[adj_node];
    }
    if(!haschild)  sum=LLONG_MAX;
    cost[node] = min(cost[node],sum);
}
int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    cin >> n>>k;

    
    for(int i=1; i<=n; i++){
        cin >> cost[i];
        visited[i]=false;
        adj_list[i].clear();
    }
    for(int i=0; i<k; i++){
        int potion_idx;
        cin >> potion_idx;
        cost[potion_idx]=0;
    }
    for(int i=1; i<=n; i++){
        int m;
        cin >> m;
        while(m--){
            int idx;
            cin >> idx;
            adj_list[i].push_back(idx);
        }
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i);
        }
    }
    for(int i=1; i<=n; i++){
        cout << cost[i] << " ";
    }
    cout << nl;
}