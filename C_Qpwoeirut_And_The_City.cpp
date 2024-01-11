/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 10-01-2024  07:42:29
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
    ll i, n, m, k, j, sum = 0, x = 0, ans;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b = a;
    vector<ll> c(n);
    ll tmpans = 0;
    for (int i = 1; i < n - 1; i += 2)
    {
        if (max(b[i - 1], b[i + 1]) >= b[i])
            tmpans += (max(b[i - 1], b[i + 1]) + 1) - b[i];
    }
    ans = tmpans;
    b = a;
    tmpans = 0;
    for (int i = n - 2; i >= 1; i -= 2)
    {
        if (max(b[i - 1], b[i + 1]) >= b[i])
            tmpans += (max(b[i - 1], b[i + 1]) + 1) - b[i];

        c[i] = tmpans;
        c[i - 1] = tmpans;
    }
    ans = min(ans, tmpans);
    if (n % 2 == 0)
    {
        b = a;
        tmpans = 0;
        for (int i = 2; i < n - 1; i += 2)
        {
            if (max(b[i - 1], b[i + 1]) >= b[i])
                tmpans += (max(b[i - 1], b[i + 1]) + 1) - b[i];
        }
        ans = min(ans, tmpans);
        b = a;
        tmpans = 0;
        for (int i = n - 3; i >= 1; i -= 2)
        {
            if (max(b[i - 1], b[i + 1]) >= b[i])
                tmpans += (max(b[i - 1], b[i + 1]) + 1) - b[i];
        }
        ans = min(ans, tmpans);

        tmpans = 0;
        ll ans2 = 0;
        b = a;
        for (int i = 1; i < n - 1; i += 2)
        {
            if (max(b[i - 1], b[i + 1]) >= b[i])
                tmpans += (max(b[i - 1], b[i + 1]) + 1) - b[i];
            ans = min(ans, tmpans+c[i+2]);
        }
    }
    print
}