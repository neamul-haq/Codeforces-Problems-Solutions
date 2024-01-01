/*
AUTHOR: Neyamul_Haq
CREATED: 18-12-2023  20:38:56
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
    string s;
    cin >> s;
    string s2 = "";
    s += '0';
    for (int i = 0; i < sz(s) - 1; i++)
    {
        if (s[i + 1] != '0')
        {
            s2 += s[i];
            break;
        }
        else
        {
            s2 += s[i];
        }
    }
    string s3 = "";
    for (int i = s2.size(); i < sz(s) - 1; i++)
    {
        s3 += s[i];
    }
    if (sz(s3) > sz(s2))
    {
        cout << s2 << " " << s3 << ndl;
        return;
    }
    else if (sz(s3) < sz(s2))
    {
        cout << -1 << ndl;
        return;
    }
    else
    {
        for (int i = 0; i < sz(s2); i++)
        {
            if (s2[i] < s3[i])
            {
                cout << s2 << " " << s3 << ndl;
                return;
            }
            else if (s2[i] > s3[i])
            {
                cout << -1 << ndl;
                return;
            }
        }
    }
    cout << -1 << ndl;
}