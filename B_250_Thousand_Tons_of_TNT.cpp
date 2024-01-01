/*
AUTHOR: Neyamul_Haq
CREATED: 17-11-2023  20:52:44
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
vector<ll> findDivisors(ll n) {
    vector<ll> divisors;

    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);

            // Avoid adding the same divisor twice for perfect squares
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }

    return divisors;
}
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
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
    }
    if(n==1){
        cout << 0 << ndl;
        return;
    }
    vector<ll> b = findDivisors(n);
    sort(all(b));
    b.erase(unique(b.begin(), b.end()), b.end());
    ll mxDif=LLONG_MIN;
    b.pop_back();
    //debug(b);
    for(ll i=0; i<b.size(); i++){
        ll s=0;
        ll mx=LLONG_MIN;
        ll mn=LLONG_MAX;
        for(ll j=0; j<a.size(); j++){
            s+=a[j];
            if((ll)(j+1)%b[i]==0){
                mx=max(s,mx);
                mn=min(mn,s);
                s=0;
            }
        }
        //debug(mx,mn);
        ll dif=mx-mn;
        mxDif=max(mxDif,dif);
    }
    cout << mxDif << ndl;
}
