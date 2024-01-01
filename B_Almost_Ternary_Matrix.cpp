/*
AUTHOR: Neyamul_Haq
CREATED: 30-12-2023  12:44:56
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
    ll i, n, m, k, j, s = 0, x = 0, ans = 0;
    cin >> n >> m;
    int a[n][m];
    bool onzero = true, zeroone = false;
    for (int i = 0, j = 0; i < n; i += 2)
    {
        if (onzero)
        {
            onzero = false;
            zeroone = true;
            a[i][j] = 1;
            a[i + 1][j] = 0;
        }
        else
        {
            onzero = true;
            zeroone = false;
            a[i][j] = 0;
            a[i + 1][j] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i][0] == 1)
        {
            onzero = true, zeroone = false;
        }
        else
        {
            onzero = false, zeroone = true;
        }
        for (int j = 0; j < m; j+=2)
        {
            if (onzero)
            {
                onzero = false;
                zeroone = true;
                a[i][j] = 1;
                a[i][j+1] = 0;
            }
            else
            {
                onzero = true;
                zeroone = false;
                a[i][j] = 0;
                a[i][j+1] = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << a[i][j] << " ";
        }
        cout << nl;
    }
}