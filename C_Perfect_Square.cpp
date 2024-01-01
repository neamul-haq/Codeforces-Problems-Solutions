/*
AUTHOR: Neyamul_Haq
CREATED: 15-10-2023  11:58:09
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
#define ump unordered_map<int, int> um;
#define mp map<int, int> m;
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
    ll n, ans = 0;
    cin >> n;
    string s;
    vector<string> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    for (ll i = 0; i < (n / 2); i++)
    {
        for (ll j = 0; j < (n / 2); j++)
        {
            vector<ll> res;
            res.push_back(v[i][j] - 'a');
            res.push_back(v[j][n - 1 - i] - 'a');
            res.push_back(v[n - 1 - i][n - 1 - j] - 'a');
            res.push_back(v[n - 1 - j][i] - 'a');
            sort(res.begin(), res.end());
            for (ll k = 0; k < 3; k++)
            {
                ans += res[3] - res[k];
            }
        }
    }
    cout << ans << endl;
}