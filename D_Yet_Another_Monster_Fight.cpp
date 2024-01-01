/*
AUTHOR: Neyamul_Haq
CREATED: 25-11-2023  23:07:51
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
    ll i, n, m, k, j, s = 0, x = 0, ans = LLONG_MAX;
    cin >> n;
    vector<ll> a(n+2);
    vector<ll> pref(n+3);
    vector<ll> suff(n+3);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for(int i=1; i<=n; i++){
        pref[i] = a[i] + i -1;
        suff[i] = a[i] + n - i;
    }

    for(int i=n; i>=1; i--){
        pref[i] = max(pref[i],pref[i+1]);
    }
    for(int i=1; i<=n; i++){
        suff[i] = max(suff[i],suff[i-1]);
    }
    for(int i=1; i<=n; i++){
        a[i] = max({a[i],pref[i+1],suff[i-1]});
    }
    debug(pref);
    debug(suff);
    debug(a);
    // for(int i=1; i<=n; i++){
    //     ans = min(ans,a[i]);
    // }
    ans = *min_element(a.begin()+1, a.end()-1);
    cout << ans << ndl;
}
