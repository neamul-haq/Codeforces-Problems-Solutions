/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 16-03-2024  20:53:43
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
    ll i, n, m, k, j, sum = 0, x = 0, ans = 0;
    cin >> n >> k;
    vector<ll> a(2 * n + 4);
    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> a[i];
    }
    map<ll, ll> mp1;
    map<ll, ll> mp2;
    map<ll, ll> mp3;
    for (int i = 1; i <= n; i++)
    {
        mp1[a[i]]++;
    }
    for (int i = n + 1; i <= 2 * n; i++)
    {
        mp2[a[i]]++;
        if (mp1[a[i]])
            mp3[a[i]]++;
    }
    vector<ll> b;
    vector<ll> c;
    for (auto it : mp1)
    {
        if (it.second == 2)
        {
            b.push_back(it.first);
            b.push_back(it.first);
        }
        if (b.size() == 2 * k)
            break;
    }
    for (auto it : mp2)
    {
        if (it.second == 2)
        {
            c.push_back(it.first);
            c.push_back(it.first);
        }
        if (c.size() == 2 * k)
            break;
    }
    while (b.size() < 2 * k)
    {
        for (auto it : mp3)
        {
            b.push_back(it.first);
            // c.push_back(it.first);
            if (b.size() == 2 * k)
                break;
        }
    }
    while (c.size() < 2 * k)
    {
        for (auto it : mp3)
        {
            // b.push_back(it.first);
            c.push_back(it.first);
            if (c.size() == 2 * k)
                break;
        }
    }

    for (auto u : b)
    {
        cout << u << " ";
    }
    cout << nl;
    for (auto u : c)
    {
        cout << u << " ";
    }
    cout << nl;
}