/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 05-01-2024  12:06:12
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
#define Pi 2 * acos(0.0)
#define mem(a, v) memset(a, v, sizeof(a))
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
    ll i, n, m, k, j, x = 0, ans = 0;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = '#' + s;
    vector<pair<ll, ll>> ops;
    vector<pair<ll, ll>> segs;
    segs.push_back({1, n});
    ll last = n + 1;
    for (int i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        ops.push_back({l, r});
        segs.push_back({last, last + r - l});
        last = last + r - l + 1;
    }

    while (k--)
    {
        ll idx;
        cin >> idx;
        if (idx >= 1 && idx <= n)
        {
            cout << s[idx] << nl;
            continue;
        }

        for (int i = m; i >= 0; i--)
        {
            if (idx >= segs[i].first && idx <= segs[i].second)
            {
                idx = ops[i - 1].first + (idx - segs[i].first);
                if (idx >= 1ll && idx <= n)
                {
                    cout << s[idx] << nl;
                    break;
                }
            }
        }
    }
}