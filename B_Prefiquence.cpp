/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 02-05-2024  20:56:00
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
    cin >> n >> m;
    string s, s2;
    cin >> s >> s2;
    deque<int> one, zero;
    for (int i = 0; i < m; i++)
    {
        if (s2[i] == '1')
            one.push_back(i);
        else
            zero.push_back(i);
    }
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (one.empty())
            {
                print 
                return;
            }
            if (!one.empty())
            {
                while (one.front() <= last)
                {
                    one.pop_front();
                    if (one.empty())
                    {
                        print 
                        return;
                    }
                }
                if (!one.empty() && one.front() > last)
                {
                    ans++;
                    last = one.front();
                    one.pop_front();
                }
            }
            else
            {
                break;
            }
        }
        else
        {
            if (!zero.empty())
            {
                if (zero.empty())
                {
                    print 
                    return;
                }
                while (zero.front() <= last)
                {
                    zero.pop_front();
                    if (zero.empty())
                    {
                        print 
                        return;
                    }
                }
                if (!zero.empty() && zero.front() > last)
                {
                    ans++;
                    last = zero.front();
                    zero.pop_front();
                }
            }
            else
            {
                break;
            }
        }
    }
    print
}