/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 02-05-2024  22:01:28
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
#define   Pi     2*acos(0.0)
#define   mem(a,v)   memset(a,v,sizeof(a))
#define sz(a) (int)(a).size()
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e5+3 ;
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
    ll i, n, m, k, j,b,s, sum = 0, x = 0, ans=0; cin >> n>>k>>b>>s;
    ll mx = LLONG_MIN;
    vector<ll>p(n+2);
    vector<ll>a(n+2);
    for(int i=1; i<=n; i++)
    {
       cin >> p[i];
    }
    for(int i=1; i<=n; i++)
    {
       cin >> a[i];
       mx =  max(mx,a[i]);
    }
    ll bmax=0, bsc=0,bcur=0;
    ll smax=0, ssc=0,scur=0;
    x=k;
    for(int i=1; i<=min(k,200004ll); i++){
        bsc = bcur + (x*a[b]);
        bmax = max(bsc,bmax);
        if(a[b] == mx) break;
        bcur += a[b];
        b = p[b];
        x--;
    }
    x=k;
    for(int i=1; i<=min(k,200004ll); i++){
        ssc = scur + (x*a[s]);
        smax = max(ssc,smax);
        if(a[s] == mx) break;
        scur += a[s];
        s = p[s];
        x--;
    }
    if(bmax>smax){
        cout << "Bodya" << nl;
    }
    else if(bmax<smax){
        cout << "Sasha" << nl;
    }
    else {
        cout << "Draw" << nl;
    }
}