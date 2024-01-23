/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 23-01-2024  14:42:47
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
ll cs = 0;
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
    ll n, q;
    cin >> n >> q;
    ll arr[n + 5];
    for (ll i = 1; i <= n; i++)
        cin >> arr[i];

    vector<vector<ld>> gun(n + 5), vag(n + 5);
    while (q--)
    {
        ld l, r, m;
        cin >> l >> r >> m;
        if (m == 1)
            continue;
        gun[l].push_back(m);
        vag[r + 1].push_back(m);
    }
    // debug(gun,vag);
    ld prefix = 1;
    for (ll i = 1; i <= n; i++)
    {
        sort(all(vag[i]), greater<int>());
        sort(all(gun[i]), greater<int>());
        // ll result = prefix;
        for (auto &u : gun[i])
        {
            if (prefix * u > 1e18)
            {
                if (!vag[i].empty() && prefix*u >= vag[i].back())
                {
                    // result *= u;
                    prefix =(prefix*u)/vag[i].back();
                    vag[i].pop_back();
                }
                continue;
            }
            prefix *= u;
            if (!vag[i].empty() && prefix >= vag[i].back())
            {
                // result *= u;
                prefix /= vag[i].back();
                vag[i].pop_back();
            }
        }
        for (auto &u : vag[i])
            prefix /= u;

        if (prefix < 1)
        {
            prefix = 1;
        }
        // prefix*=result;
        debug(i, prefix, result);
        arr[i] /= prefix;
    }
    cout << "Case " << ++cs << ": ";
    for (ll i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}