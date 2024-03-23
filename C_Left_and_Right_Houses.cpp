/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 19-03-2024  22:35:11
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
    ll i, n, m, k, j, sum = 0, x = 0, ans=0; cin >> n;
    string s; cin >> s;
    double dis=n;
    for(int i=0; i<n; i++){
        if(s[i]=='1') sum++;
    }
    ll curSum=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1') curSum++;
        if(i==0){
            if(n%2==0 && sum==n/2){
                dis=(double)n/2.0;
            }
            else if(n%2==1 && sum==(n+1)/2){
                dis=(double)n/2.0;
            }
        }
        double curDis=abs((n/2.0)-i-1);
        ll lzero=i+1-curSum,lone=curSum;
        ll rightSum=sum-curSum;
        ll rzero=n-i-1-rightSum,rone=rightSum;
        if(lzero>=lone && rone>=rzero && curDis<dis){
            ans=i+1;
            dis=curDis;
        }
        debug(i,lzero,lone,rzero,rone,dis,ans);
    }
    cout << ans << nl;
}