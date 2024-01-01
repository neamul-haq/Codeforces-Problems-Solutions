/*
AUTHOR: Neyamul_Haq
CREATED: 15-10-2023  22:53:46
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
    while (t--)
        solve();
}

void solve()
{
    long long H;
    int n;
    cin >> H >> n;
    vector<long long> a(n);
    long long sum = 0;
    long long gap = 0;
    long long h = H;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        h += a[i];
        if (h <= 0)
        {
            cout << i + 1 << endl;
            return;
        }
        gap = max(gap, sum);
    }

    if (sum <= 0)
    {
        cout << -1 << endl;
        return;
    }

    long long whole = (H - gap) / sum;
    H -= whole * sum;
    long long result = whole * n;
    for (int i = 0;; i++)
    {
        H += a[i % n];
        result++;
        if (H <= 0)
        {
            cout << result << endl;
            break;
        }
    }
}