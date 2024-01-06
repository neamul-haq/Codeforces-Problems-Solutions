/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 05-01-2024  10:11:59
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
    ll i, n, k, j, s = 0, x = 0, ans=0; cin >> n >>k;
    if(n%k!=0){
        cout << -1 << nl;
        return;
    }
    if(n==k){
        cout << k << " ";
        for(int i=2; i<n; i++){
            cout << i << " ";
        }
        cout << 1<< nl;
        return;
    }

    vector<int>a(n+1);
    a[1]=k;
    for(int i=2; i<n; i++){
        a[i]=i;
    }
    a[n]=1;
    a[k]=n;
    for(int i=2; i<n; i++){
        if(n%i==0 and i%k==0){
            swap(a[i],a[k]);
            k=i;
        }
    }
    for(int i=1; i<=n; i++){
        cout << a[i] << " ";
    }
    cout << nl;
}