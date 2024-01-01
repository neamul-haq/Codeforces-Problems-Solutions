/*
AUTHOR: Neyamul_Haq
CREATED: 24-12-2023  10:39:22
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
#define ndl '\n'
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define f(strt,end) for(int i=strt; i<=end; i++)
#define sz(a) (int)(a).size()
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll i, n, m, k, j, s = 0, x = 0, ans=0; cin >> n;
    vector<ll>a(n);
    vector<ll>b(n);
    vector<ll>c(n);
    vector<ll>d(n);
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
       cin >> b[i];
    }
    for(int i=0; i<n; i++)
    {
       cin >> c[i];
    }
    sort(all(a));
    sort(all(b));
    sort(all(c));
    for(int i=n-1; i>=0; i--)
    {
       auto idx = upper_bound(all(b),a[i]);
       d[i] = b[idx-b.begin()]-a[i];
       b.erase(idx);
    }
    sort(all(d));
    for(int i=0; i<n; i++)
    {
       ans += d[i]*c[n-i-1];
    }
    cout << ans << ndl;
}