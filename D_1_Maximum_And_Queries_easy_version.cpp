/*
AUTHOR: Neyamul_Haq
CREATED: 02-12-2023  14:28:36
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
    while (t--)
        solve();
}

void solve()
{
    ll i, n, m, k, j, q, s = 0, x = 0, ans = 0;
    cin >> n >> q;
    vector<ll> a(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        //b[i] = a[i];
    }

    while (q--)
    {
        cin >> k;
        vector<ll> b(n);
        for(int i=0; i<n; i++){
            b[i]=a[i];
        }
        for (ll i = 60; i >= 0; i--)
        {
            ll val = (1ll << i);
            //cout << val<< ndl;
            ll operation = 0;
            for (int j = 0; j < n; j++)
            {
                operation += max(val - b[j], 0ll);
                if (operation > k)
                {
                    //continue;
                    break;
                }
            }
            if (k >= operation)
            {
                ans += val;
                k -= operation;
                for (int j = 0; j < n; j++)
                {
                    b[j] = max(val,b[j]);
                }
            }

            for(int j=0; j<n; j++){
                b[j]%=val;
            }
        }
        print
        ans=0;
    }

}