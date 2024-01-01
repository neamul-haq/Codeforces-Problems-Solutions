/*
AUTHOR: Neyamul_Haq
CREATED: 06-12-2023  16:42:23
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
    ll i, n, m, k, j, x = 0, ans=0; cin >> n >> m;
    string s; cin >> s;
    int l=0, r=n+m-1;
    while(l<=r){
        if(s[l]!=s[r]){
            if(s[l]=='?'){
                s[l]=s[r];
            }
            else if(s[r]=='?'){
                s[r]=s[l];
            }
            else{
                cout << -1 << ndl;
                return;
            }
        }
        l++;
        r--;
    }
    int on=0,ze=0;
    for(int i=0; i<n+m; i++){
        if(s[i]=='0') ze++;
        else if(s[i]=='1') on++;
    }
    int remon=m-on;
    int remze=n-ze;
    l=0,r=n+m-1;
    while(l<=r){
        if(l==r && s[l]=='?'){
            if(remon>0){
                s[l] = '1';
                remon--;
            }
            else if(remze>0){
                s[l] = '0';
                remze--;
            }
        }
        if(s[l]=='?'){
            if(remze>1){
                s[l]='0';
                s[r]='0';
                remze-=2;
            }
            else{
                s[l]='1';
                s[r]='1';
                remon-=2;
            }
        }
        l++;
        r--;
    }
    if(remze*remon!=0){
        cout << -1 << ndl;
        return;
    }
    cout << s << ndl;
}