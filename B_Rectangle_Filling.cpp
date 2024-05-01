/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 27-04-2024  21:02:50
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
    ll i, n, m, k, j, sum = 0, x = 0, ans=0; cin >> n>>m;
    vector<string>a(n);
    for(int i=0; i<n; i++)
    {
        string s; cin >>s;
        a[i] = s ;
    }
    ll rw=0,rb=0,cw=0,cb=0;
    if(n==1 && m==1){
        cyes
        return;
    }
    if(n==1){
        if(a[0][0]==a[0][m-1]){
            cyes
        }
        else cno
    }
    else if(m==1){
        if(a[0][0]==a[n-1][0]){
            cyes
        }
        else cno
    }
    else{
        for(int i=0; i<n; i++){
            bool ok=true;
            char c = a[i][0];
            for(int j=0; j<m; j++){
                if(a[i][j]!=c){
                    ok=false;
                    break;
                }
            }
            if(ok){
                if(c=='W') rw++;
                else rb++;
            }
        }
        for(int j=0; j<m; j++){
            bool ok=true;
            char c = a[0][j];
            for(int i=0; i<n; i++){
                if(a[i][j]!=c){
                    ok=false;
                    break;
                }
            }
            if(ok){
                if(c=='W') cw++;
                else cb++;
            }
        }
        debug(rw,rb,cw,cb);
        if(rw>0 && rb>0){
            cno
        }
        else if(cw>0 && cb>0){
            cno
        }
        else cyes
    }
    
}