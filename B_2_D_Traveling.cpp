/*
AUTHOR: Neyamul_Haq
CREATED: 10-09-2023  20:50:25
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
#define f(i, n) for (int i = 0; i < n; i++)
#define ump unordered_map<int, int> um;
#define mp map<int, int> m;
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

ll dis(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return (ll)abs(p1.first - p2.first) + (ll)abs(p1.second - p2.second);
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
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> v(n + 2);
    for (int i = 1; i <= n; i++)
    {
        ll f, s;
        cin >> f >> s;
        pair<ll, ll> pp;
        pp.first = f;
        pp.second = s;
        v[i] = pp;
    }
    ll ans = dis(v[a], v[b]);
        ll mn1 = LLONG_MAX,mn2 = LLONG_MAX;
    for (int i = 1; i <= k; i++)
    {
        mn1 = min(mn1, dis(v[a], v[i]));
    }
    for (int i = 1; i <= k; i++)
    {
        mn2 = min(mn2, dis(v[b], v[i]));
    }
    if(k>0) ans = min(ans, (ll)(mn1 + mn2));
    print
}