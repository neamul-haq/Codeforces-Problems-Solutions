/*
AUTHOR: Neyamul_Haq
CREATED: 18-11-2023  12:04:57
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
    ll i, n, m, k, j, s = 0, ans=0; cin >> n;
    vector<ll>a(n);
    map<ll,ll>mp;
    pair<ll,ll>mn={__LONG_LONG_MAX__,-1};
    for(ll i=0; i<n; i++)
    {
       cin >> a[i];
       mp[a[i]]++;
       if(mn.first>a[i]) mn={a[i],i};
    }
    if(is_sorted(all(a))){
        print
        return;
    }
    bool ok=true;
    for(int i=0; i<n-1; i++){
        if(mp[a[i]]>1){
            if(i==0){
                if(a[i]!=a[i+1]){
                    ok=false;
                    break;
                }
            }
            else{
                if(a[i]!=a[i+1] or a[i]!=a[i-1]){
                    ok=false;
                    break;
                }
            }
            mp[a[i]]--;
        }
    }
    if(!ok){
        cout << -1 << ndl;
        return;
    }
    cout << mn.second << ndl;
}
