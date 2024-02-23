/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 22-02-2024  13:49:22
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
    vector<string> grid;
    for(int i=0; i<n; i++){
        string s;
        cin >>s;
        grid.push_back(s);
    }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << grid[i][j]<< " ";
    //     }
    //     cout << nl;
    // }
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '1')
            {
                cnt++;
                if (cnt == 1)
                    x = j;
            }
            else
            {
                if (cnt > 0) break;
            }
        }
        if (cnt)
        {
            if(cnt==1) {
                cout << "TRIANGLE" << nl;
                return;
            }
            if (i + cnt - 1<n && grid[i + cnt - 1][x] == '1' && grid[i + cnt - 1][x + cnt - 1] == '1')
            {
                cout << "SQUARE" <<nl;
                return;
            }
            else{
                cout << "TRIANGLE" << nl;
                return;
            }
        }
    }
}