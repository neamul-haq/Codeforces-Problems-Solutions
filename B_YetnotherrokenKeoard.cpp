/*
AUTHOR: Neyamul_Haq
CREATED: 05-12-2023  20:58:09
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
    string s; cin >> s;
    int B=0,b=0;
    map<int,bool>m;
    int n=sz(s);
    //cout << n << ndl;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='b') b++;
        else if(s[i]=='B') B++;
        else{
            if(s[i]>='a' && s[i]<='z' && b>0){
                m[i]=true;
                b--;
            }
            else if(s[i]>='A' && s[i]<='Z' && B>0){
                m[i]=true;
                B--;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(s[i]=='b' or s[i]=='B') continue;
        if(!m[i]){
            cout << s[i];
        }
    }
    cout << ndl;
}