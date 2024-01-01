/*
AUTHOR: Neyamul_Haq
CREATED: 28-10-2023  22:42:35
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
    ll i, n, m, k, j, x = 0, ans=0; cin >> n >>m;
    string s;
    string s2; 
    cin >> s ;
    cin >> s2;
    bool ok=true;
    bool ok2=true;
    for(int i=1; i<m; i++){
        if(s2[i]==s2[i-1]){
            ok=false;
            break;
        }
    }
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            ok2=false;
            break;
        }
    }
    if(ok2){
        cyes
        //cout <<"sd" << ndl;
        return;
    }
    if(!ok){
        cno
        return;
    }
    bool on=true,ze=true;
    if(m==1){
        if(s2[0]=='1'){
            ze=false;
        }
        else{
            on=false;
        }
    }
    if(m>1){
        if(s2[0]!=s2[m-1]){
            cno
            return;
        }
        if(s2[0]=='1' && s2[m-1]=='1'){
            ze=false;
        }
        else{
            on=false;
        }
    }
    //cout << ze << " " << on << ndl;
    for(int i=1; i<n; i++){
        if(s[i]=='1' && s[i-1]=='1' && on){
            cno
            return;
        }
        if(s[i]=='0' && s[i-1]=='0' && ze){
            cno
            return;
        }
    }
    //cout << "sdgf" << ndl;
    cyes

}