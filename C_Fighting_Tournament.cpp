/*
Problem_Link:https://codeforces.com/problemset/problem/1719/C
AUTHOR: Neyamul_Haq
CREATED: 29-01-2024  00:06:57
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
    ll n, q;
    cin >> n >> q;
    deque<ll> dq;
    vector<vector<ll>> v(n+1);
    vector<ll>arr(n + 1);
    vector<ll> p(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        dq.push_back(a);
        p[a] = i;
    }

    ll win = 0;

    while (dq.front() != n)
    {
        ll first = dq.front();
        dq.pop_front();
        ll second = dq.front();
        dq.pop_front();
        if (first > second)
        {
            dq.push_front(first);
            v[p[first]].push_back(win++);
        }
        else
        {
            dq.push_front(second);
            v[p[second]].push_back(win++);
        }
        debug(v);
    }
    debug(v);
    while (q--)
    {
        ll x, k;
        cin >> x >> k;
        ll ans = lower_bound(v[x].begin(), v[x].end(), k) - v[x].begin();
        debug(ans);
        if (arr[x] == n && k > win)
            ans += k - win;

        cout << ans << '\n';
    }
}