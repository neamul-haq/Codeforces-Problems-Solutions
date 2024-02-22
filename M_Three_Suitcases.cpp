/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 15-02-2024  12:24:45
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
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
ll x[3], a, b, c;
ll fun(ll i){
     if(i<5){
        return a;
    }
    else if(i<10){
        return b;
    }
    else{
        return c;
    }
}

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; 
    while(t--) solve();
}

void solve(){
    
    cin >> x[0] >> x[1] >> x[2] >> a >> b >> c;
    ll ans = fun(x[0]) + fun(x[1]) + fun(x[2]);

    ans = min({ans, fun(x[0] + x[1]) + fun(x[2]), fun(x[0] + x[2]) + fun(x[1]),fun(x[2] + x[1]) + fun(x[0]), fun(x[0] + x[1] + x[2])});

    cout << ans << '\n';
    
}