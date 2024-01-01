/*
AUTHOR: Neyamul_Haq
CREATED: 26-09-2023  08:32:05
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
    ll n; cin >> n;
 
    set<ll> s[n];
    set<ll> unq;
 
    for (ll i = 0; i < n; i++) {
        ll k; cin >> k;
        while (k--) {
            ll a; cin >> a;
            s[i].insert(a);
            unq.insert(a);
        }
    }
 
    ll mx = 0;
    for (auto &u : unq) {
        set<ll> temp;
        for (ll i = 0; i < n; i++) {
            if (s[i].find(u) != s[i].end()) continue;
            for (auto &v : s[i]) temp.insert(v);
        }
 
        mx = max(mx, (ll)temp.size());
    }
    cout << mx << ndl;
}