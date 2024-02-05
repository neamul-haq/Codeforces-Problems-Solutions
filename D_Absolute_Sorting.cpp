/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 02-02-2024  11:34:57
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
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    ll x=0;
    for(ll i=0; i<n-1; i++){
        if(v[i]>v[i+1]){
            x=max(x,((v[i]+v[i+1]+1)/2));
        }
    }
    
    for(ll i=0; i<n; i++){
        v[i]=abs(v[i]-x);
    }
    
    bool ok=1;
    for(ll i=0; i<n-1; i++){
       if(v[i]>v[i+1]){
         ok=0; break;
       }
    } 
 
    if(ok) cout << x << endl;
    else cout << -1<< endl;
    
}