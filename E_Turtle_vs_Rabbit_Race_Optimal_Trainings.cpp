/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 28-02-2024  09:53:38
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
const ll N = 1e5+2;
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define all(x) (x).begin(), (x).end()
void solve();
ll i, n, m, k, j, sum = 0, x = 0, ans = 0;

vector<ll> a(N), pref(N + 1);
auto f = [&](int l, int r, ll u)
{
    ll sum = pref[r + 1] - pref[l];
    return sum * u - sum * (sum - 1) / 2;
};

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
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        pref[i + 1] = pref[i] + a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        ll l, u;
        cin >> l >> u;
        l--;
        int lo = l, hi = n - 1;
        while (lo < hi)
        {
            int mid = (lo + hi) / 2;
            if (f(l, mid, u) < f(l, mid + 1, u))
                lo = mid + 1;
            else
                hi = mid;
        }
        cout << lo + 1 << " ";
    }
    cout << "\n";
}