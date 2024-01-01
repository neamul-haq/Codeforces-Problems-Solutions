/*
AUTHOR: Neyamul_Haq
CREATED: 30-10-2023  20:52:54
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
vector<ll> v2(31);
map<ll,bool>mp;
long long power(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main()
{
#ifndef LOKAL
    fast()
#endif
        for (ll i = 1; i <= 30; i++)
    {
        v2[i] = power(2LL, i);
    }
    v2[0] = 1LL;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    ll i, n, m, k, j;
    cin >> n >> m;
    vector<ll> a(n + 1);
    vector<ll> b(m + 1);
    vector<vector<ll>> v(32);

    f(1, n)
    {
        cin >> a[i];
        
        for (ll j = 1; j <= 30; j++)
        {
            mp[(ll)j]=false;
            if (a[i] % (v2[j]) == 0)
            {
                v[j].push_back(i);
                //break;
            }
        }
    }
    f(1, m)
    {
        cin >> b[i];
    }
    debug(v);
    f(1, m)
    {
        if(mp[b[i]]) continue;
        for (ll j = 0; j < v[b[i]].size(); j++)
        {
            ll val = v2[b[i]];
            
            if (a[v[b[i]][j]] % val == 0)
            {
                ll val2 = v2[b[i]-1];
                a[v[b[i]][j]] += val2;
            }
        }
        mp[b[i]]=true;
    }
    f(1, n)
    {
        cout << a[i] << " ";
    }
    cout << ndl;
    mp.clear();
}