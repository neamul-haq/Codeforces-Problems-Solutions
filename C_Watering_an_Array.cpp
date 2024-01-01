/*
AUTHOR: Neyamul_Haq
CREATED: 26-12-2023  11:04:18
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
#define ndl '\n'
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
    ll i, n, m, k,d, j, s = 0, x = 0, ans=0; cin >> n>>k>>d;
    vector<int>a(n);
    vector<int>b(k);
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
       if(a[i]==i+1) ans++;
    }
    ans+=(d-1)/2;
    for(int i=0; i<k; i++)
    {
       cin >> b[i];
    }
    for(int i=0; i<min(2*n-1,d-1); i++){
        ll total_match=0;
        int day = i%k;
        for(int j=0; j<n; j++){
            if(j<b[day]) a[j]++;
            if(a[j]==j+1) total_match++;
        }
        ans = max(ans,total_match + (d-i-2)/2);
        debug(i,total_match,ans);
    }
    print
}