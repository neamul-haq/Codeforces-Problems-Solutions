/*
AUTHOR: Neyamul_Haq
CREATED: 05-12-2023  22:28:19
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
const ll N = 1e7+3;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
ll dp[N];
ll dp2[N];
ll dsum(ll n){
    ll sum = 0;
    while(n) {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    memset(dp,-1,sizeof(dp));
    dp[0]=1;
    dp[1]=3;
    dp[2]=6;
    dp[3]=10;
    dp[4]=15;
    dp[5]=21;
    dp[6]=28;
    dp[7]=36;
    dp[8]=45;
    dp[9]=55;
    while(t--) solve();
}

void solve(){
    ll i, n, m, k, j, s = 0, x = 0, ans=1; cin >> n;
    while(n){
        ans*=dp[n%10];
        n/=10;
    }
    cout << ans << ndl;
}