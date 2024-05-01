/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 30-04-2024  21:12:41
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
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll cnt = 0;
    ll l = 1, r = LLONG_MAX;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        x = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < mid)
            {
                x += (mid - a[i]);
                if (x > k)
                    break;
            }
        }
        if (x > k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
            cnt = max(cnt,mid);
        }
    }
    //cout << cnt << nl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < cnt)
        {
            k -= (cnt - a[i]);
        }
    }
    //cout << k << nl;
    ans += (cnt - 1) * n;
    ans++;
    ll mx=0;
    x=0;
    ll y=k;
    for (int i = n - 1; i >=0; i--)
    {
        if (a[i] < cnt + 1)
        {
            if(k<=0) break;
            y--;
            x++;
            if(!y) break;
        }
    }
    k=y;
    y=k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= cnt + 1)
        {
            ans++;
        }
    }
    ans+=(mx+x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] < cnt + 1)
        {
            if(k<=0) break;
            y--;
            mx++;
            if(!y) break;
        }
    }
    cout << ans << nl;
}