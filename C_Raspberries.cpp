/*
AUTHOR: Neyamul_Haq
CREATED: 22-10-2023  17:23:29
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
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
    ll n, k, ans;
    cin >> n >> k;
    vector<ll> a(n);
    ll cnt = 0;
    ll ev = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 1)
            cnt++;
        else
            ev++;
    }

    if(n==1){
        if(a[0]%k==0){
            cout << 0 << ndl;
        } 
        else cout << (k - (a[0] % k)) << ndl;
        return;
    }

    ans = 4;
    
    if (k == 4)
    {
        if(ev>=2) ans=0;
        if(cnt>=2) ans=min(ans, (ll)2);
        if(ev>=1) ans=min(ans,(ll)1);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % k == 0)
        {
            ans=0;
        }
        ll v=(k - (a[i] % k));
        //cout << v << ndl;
        ans = min(ans, v);
    }

    print
}