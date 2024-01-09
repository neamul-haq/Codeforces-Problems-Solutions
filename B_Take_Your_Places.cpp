/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 06-01-2024  11:09:59
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
map<ll, bool> mp;
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
    int n, i, j, even = 0, odd = 0, dif;
    vector<int> v_odd, v_even;
    cin >> n;
    int ar[n + 2];
    for (i = 1; i <= n; i++)
    {
        cin >> ar[i];
        if (ar[i] % 2 == 0)
        {
            even++;
            v_even.push_back(i);
        }
        else
        {
            odd++;
            v_odd.push_back(i);
        }
    }
    dif = abs(odd - even);
    if (dif >= 2)
        cout << "-1" << endl;
    else
    {
        int even_shift = 0, odd_shift = 0, pos1 = 1, pos2 = 2, cnt = 0, cnt1 = 0;
        if (even == odd)
        {
            for (i = 0; i < even; i++)
            {
                even_shift += abs(pos2 - v_even[i]);
                pos2 += 2;
                odd_shift += abs(pos1 - v_odd[i]);
                pos1 += 2;
            }
            cnt = min(even_shift, odd_shift);
            even_shift = 0, odd_shift = 0, pos1 = 1, pos2 = 2;

            for (i = 0; i < odd; i++)
            {
                even_shift += abs(pos1 - v_even[i]);
                pos1 += 2;
                odd_shift += abs(pos2 - v_odd[i]);
                pos2 += 2;
            }
            cnt1 = min(even_shift, odd_shift);
            cout << min(cnt, cnt1) << endl;
        }
        else
        {
            if (odd > even)
            {
                even_shift = 0, odd_shift = 0, pos1 = 1, pos2 = 2;
                for (i = 0; i < odd; i++)
                {
                    odd_shift += abs(pos1 - v_odd[i]);
                    pos1 += 2;
                }
                for (i = 0; i < even; i++)
                {
                    even_shift += abs(pos2 - v_even[i]);
                    pos2 += 2;
                }
                cout << min(odd_shift, even_shift) << endl;
            }
            else
            {
                even_shift = 0, odd_shift = 0, pos1 = 1, pos2 = 2;
                for (i = 0; i < even; i++)
                {
                    even_shift += abs(pos1 - v_even[i]);
                    pos1 += 2;
                }
                for (i = 0; i < odd; i++)
                {
                    odd_shift += abs(pos2 - v_odd[i]);
                    pos2 += 2;
                }
                cout << min(odd_shift, even_shift) << endl;
            }
        }
    }
}