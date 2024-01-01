/*
AUTHOR: Neyamul_Haq
CREATED: 31-10-2023  11:44:24
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
#define cyes cout << "Yes" << '\n';
#define cno cout << "No" << '\n';
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
    ll i, n, m, k, j, s = 0, x = 0, ans=0; cin >> n >>m;
    vector<ll>a(n+1);
    for(int i=1; i<=n; i++)
    {
       cin >> a[i];
    }
    vector<ll>prefix(n+1);
    for(int i = 1; i <= n; ++i) {
 
			prefix[i] = prefix[i - 1] + a[i];
 
		}
 
		int current_city = 1;
 
		for(int i = 2; i <= n; ++i) {
 
			if(prefix[current_city] + a[i] >= i * m) {
 
				current_city = i;
			}
 
		}

    if(current_city==n){
        cyes
    }
    else cno
    
}