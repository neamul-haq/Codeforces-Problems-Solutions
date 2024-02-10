/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 06-02-2024  21:41:54
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
    cin >> n;
    vector<ll> a(n+5);
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n-1; i++)
    {   
        if (a[i] != a[i + 1]) v.push_back(i);
    }
    // for(auto u:v){
    //     cout << u<< " ";
    // }
    // cout << nl;
    v.push_back(10000000);
    v.push_back(10000000);
    cin >> k;
    while (k--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == r)
        {
            cout << -1 << " " << -1 << nl;
            continue;
        }
        int idx = lower_bound(all(v), l) - v.begin();
        //cout << idx << nl;
        if (v[idx] > r)
        {
            cout << -1 << " " << -1 << nl;
            continue;
        }

        while (1)
        {
            if (v[idx]+1<=r &&  a[v[idx]] != a[v[idx] + 1])
            {
                cout << v[idx]+1 << " " << v[idx] + 2 << nl;
                break;
            }
            if(v[idx]>r) {
                cout << -1 << " " << -1 << nl;
                break;
            }
            idx++;
            if(v[idx]>r) {
                cout << -1 << " " << -1 << nl;
                break;
            }
        }
    }
    cout << nl;
}