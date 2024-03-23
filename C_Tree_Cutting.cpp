/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 22-03-2024  23:35:21
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
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
vector<int> graph[100001];
int vis[100001];
int n, k;
int temp = 0;
int dfs(int parent, int child, int x)
{
    vis[child] = 1;
    int size = 0;
    for (auto gs : graph[child])
    {
        if (vis[gs] == 0)
        {
            size += dfs(child, gs, x);
        }
    }
    size++;
    if (size >= x)
    {
        temp++;
        size = 0;
    }
    return size;
}

bool is_possible(int x)
{
    for (int i = 0; i <= n; i++)
    {
        vis[i] = 0;
    }
    temp=0;
    dfs(-1, 1, x);
    if (temp > k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve()
{

    cin >> n >> k;
    int x, y;
    for (int i = 0; i <= n; i++)
    {
        graph[i].clear();
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int low = 1, high = n;
    int mid;
    int ans = 0;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (is_possible(mid))
        {
           // cout << 1 << nl;
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << ans << nl;
}