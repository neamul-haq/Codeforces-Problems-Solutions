/*
AUTHOR: Neyamul_Haq
CREATED: 22-10-2023  13:30:55
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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;
    ll j = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            v.push_back(j);
        }
        j++;
    }
    ll sz = v.size();
    reverse(all(v));
    vector<ll> ans(n, -1);
    // debug(v);
    if (sz == 0)
    {
        for (auto u : ans)
        {
            cout << u << " ";
        }
        cout << ndl;
        return;
    }
    ll val = 0;
    ll inc = 0;
    bool ok = false;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (v.back() <= inc)
            v.pop_back();
        if (!ok)
        {
            if (s[i] == '0')
                ans[inc] = val;
            else
            {
                val += (v.back() - inc);
                ans[inc] = val;
                v.pop_back();
            }
        }
        else
        {
            val += (v.back() - inc);
            ans[inc] = val;
            v.pop_back();
        }
        if (s[i] == '1')
            ok = true;
        inc++;
        if (inc == sz)
            break;
    }
    for (auto u : ans)
    {
        cout << u << " ";
    }
    cout << ndl;
}