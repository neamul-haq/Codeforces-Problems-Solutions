/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 26-04-2024  10:41:41
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

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll n,c,d;
    cin>>n>>c>>d;
    vector<ll>v(n*n); 
    for(ll i=0; i<n*n; i++){
        cin>>v[i];
    }
    sort(all(v));
    ll a11=v[0];
    vector<ll>v1(n*n);
    ll cnt=0;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            v1[cnt++] = a11+c*i+d*j;
        }
    }
    sort(all(v1));
    if(v==v1){
        cyes
    }
    else cno
    
}