/*
AUTHOR: Neyamul_Haq
CREATED: 10-09-2023  21:33:56
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
#define f(i, n) for (int i = 0; i < n; i++)
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
    int n, m, ans = 0;
    cin >> n >> m;
    int a[n + 1][m + 1];

    for (int j = 1; j <= m; j++)
    {
        int val = j;
        int val2 = j - 1;
        if (j == m)
        {
            val = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            a[i][j] = val;
            val++;
            if (val == val2)
                val++;
            if (val == m)
                val = 0;
            if (val == val2)
                val++;
            if (val == m)
                val = 0;
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << ndl;
    // }

    vector<int> mex;
    for (int j = 1; j <= m; j++)
    {
        vector<int> vv;
        for (int i = 1; i <= n; i++)
        {
            vv.push_back(a[i][j]);
        }
        debug(vv);
        sort(all(vv));
        int src = 0;
        int u;
        for (u = 0; u < vv.size(); u++)
        {
            if (u > 0)
            {
                if (vv[u] == vv[u - 1])
                    continue;
            }
            if (vv[u] != src)
            {
                mex.push_back(src);
                break;
            }
            src++;
        }
        if (u == vv.size())
            mex.push_back(src);
    }
    debug(mex);
    sort(all(mex));
    int src = 0;
    int u;
    for (u = 0; u < mex.size(); u++)
    {
        if (u > 0)
        {
            if (mex[u] == mex[u - 1])
                continue;
        }
        if (mex[u] != src)
        {
            ans = src;
            break;
        }
        src++;
    }
    if (u == mex.size())
        ans = src;
    print

        for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << ndl;
    }
}