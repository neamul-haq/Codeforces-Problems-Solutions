/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 13-01-2024  13:39:48
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
map<string, pair<string, int>> mp;
map<string, int> mp2;
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

    // memset(mp3,{"",false},sizeof(mp3));
    for (int i = 0; i < n - 1; i++)
    {
        string s, s2;
        int cst;
        cin >> s >> s2 >> cst;
        mp[s] = {s2, cst};
        mp2[s]++;
        mp2[s2]++;
        ans += cst;
    }
    for (auto u : mp2)
    {
        if (u.second == 1 && mp[u.first].second != 0)
        {
            string s3 = u.first;
            while (mp[s3].second)
            {
                cout << s3 << " " << mp[s3].first << " " << mp[s3].second << nl;
                s3 = mp[s3].first;
                // if()
            }
            cout << ans << nl;
            mp.clear();
            mp2.clear();
            return;
        }
    }
}