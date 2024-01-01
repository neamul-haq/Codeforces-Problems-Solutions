/*
AUTHOR: Neyamul_Haq
CREATED: 30-10-2023  20:40:55
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
    ll i, n, m, k, j, s = 0, x = 0, ans=0; cin >> n;
    vector<int>a(n+1);
    f(1,n){
        cin >> a[i];
    }
    bool ok=true;
    for(int i=3; i<4; i++){
        if(i>=n) break;
        if(a[i]>a[i+1]) ok=false;
    }
    for(int i=5; i<8; i++){
        if(i>=n) break;
        if(a[i]>a[i+1]) ok=false;
    }
    for(int i=9; i<16; i++){
        if(i>=n) break;
        if(a[i]>a[i+1]) ok=false;
    }
    for(int i=17; i<20; i++){
        if(i>=n) break;
        if(a[i]>a[i+1]) ok=false;
    }
    if(ok){
        cyes
    }
    else cno
}