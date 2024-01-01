/*
AUTHOR: Neyamul_Haq
CREATED: 28-12-2023  16:50:53
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
#define ndl '\n'
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
bool cmp(pair<ll, ll> x, pair<ll, ll> y)
{
    if (x.first == y.first)
        return x.second > y.second;
    return x.first < y.first;
}
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
    ll i, n, m, k, j, s = 0, x = 0, ans = 0;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<pair<ll, ll>> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        c[i] = {b[i], a[i]};
    }
    sort(all(c), cmp);
    ll val = 0;
    debug(c);
    for (int i = 0; i < n; i++)
    {
        while (c[i].second - val >0 && k>0)
        {
            val += k;
            k -= c[i].first;
            if (k <= 0)
                break;
                debug(i,val,k);
        }
    }
    // cout << val << ndl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > val)
        {
            cno 
            return;
        }
    }
    cyes
}