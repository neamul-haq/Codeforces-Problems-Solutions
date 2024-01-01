/*
AUTHOR: Neyamul_Haq
CREATED: 07-12-2023  22:33:44
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
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define f(strt, end) for (int i = strt; i <= end; i++)
#define sz(a) (int)(a).size()
int const mod = 1e9 + 7;
const ll inf = 1e18;
const ll N = 1e3;
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
#ifndef LOKAL
    fast()
#endif
        ll t = 1;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    ll i, n, m, k, j, s = 0, x = 0;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> b(104);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]].push_back(i);
    }
    int val=0;
    for (int i = 0; i < 104; i++)
    {
        bool ok=false;
        for (int j = 0; j < b[i].size(); j++)
        {
            vector<int> c = b[i];
            if (c.size() == 0)
                continue;
            if(j==0){
                ans[b[i][j]]=1;
                continue;
            }
            ok =true;
            if(val==0)  ans[b[i][j]]=2;
            else ans[b[i][j]]=3;
        }
        if(ok) val^=1;
    }
    bool ok2=false,ok3=false;
    for(int i=0; i<n; i++){
        if(ans[i]==2) ok2=true;
        if(ans[i]==3) ok3=true;
    }
    if(!ok2 or !ok3){
        cout << -1 << ndl;
        return;
    }
    for(auto u:ans){
        cout << u << " ";
    }
    cout << ndl;
}