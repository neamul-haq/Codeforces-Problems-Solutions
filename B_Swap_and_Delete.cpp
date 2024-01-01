/*
AUTHOR: Neyamul_Haq
CREATED: 18-12-2023  21:07:51
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
    string s; 
    cin >> s;
    if(sz(s)==1){
        cout << 1 << ndl;
        return;
    }
    s = '#'+s;
    //cout << s<< ndl;;
    int on=0,ze=0;
    for(int i=1; i<sz(s); i++){
        if(s[i]=='0') ze++;
        else on++;
    }
    if(on==0 or ze==0){
        cout << sz(s)-1 << ndl;
        return;
    }
    if(ze==on){
        cout << 0 << ndl;
        return;
    }
    else if(ze<on){
        bool ok=false;
        for(int i=1; i<sz(s); i++){
            if(s[i]=='1') ze--;
            if(ze==0){
                int j;
                for(j=i+1; j<sz(s); j++){
                    if(s[j]=='1') {
                        j--;
                        break;
                    }
                }
                cout << sz(s)-j-1 << ndl;
                return;
            }
        }
    }
    else{
        for(int i=1; i<sz(s); i++){
            if(s[i]=='0') on--;
            if(on==0){
                int j;
                for(j=i+1; j<sz(s); j++){
                    if(s[j]=='0') {
                        j--;
                        break;
                    }
                }
                cout << sz(s)-j-1 << ndl;
                return;
            }
        }
    }
}