/*
AUTHOR: Neyamul_Haq
CREATED: 06-12-2023  10:47:33
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
    ll n,i,j,s=0;
    	cin>>n;
    	ll l=0,r=1e9,x=0;
    	pair<ll,ll>a[n];
    	for(i=0;i<n;i++) cin>>a[i].first>>a[i].second;
    	ll ans=0;
    	while(l<=r){
    		ll mid=(l+r)/2;
    		ll mx=0,mn=0,x=0;
    		for(i=0;i<n;i++){
    			mn-=mid;
    			mx+=mid;
    			mn=max(mn,a[i].first);
    			mx=min(mx,a[i].second);
    			if(mn>mx){x=1;break;}
    		}
    		if(x==1){
    			l=mid+1;
    		}
    		else{
    			r=mid-1;
    			ans=mid;
    		}
    	}
    	cout<<ans<<"\n";
}