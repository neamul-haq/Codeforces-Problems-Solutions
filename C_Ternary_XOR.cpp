/*
AUTHOR: Neyamul_Haq
CREATED: 07-12-2023  23:31:26
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
    ll i, n, m,  ans=0; cin >> n;
    string x; cin >> x;
    string a="";
    string b="";
    bool ok=false;
    for(int i=0; i<n; i++){
        if(ok && x[i]=='2'){
            a+='0';
            b+='2';
            continue;
        }
        if(ok && x[i]=='1'){
            a+='0';
            b+='1';
            continue;
        }
        if(x[i]=='0'){
            a+='0';
            b+='0';
        }
        else if (x[i]=='1'){
            a+='1';
            b+='0';
            ok=true;
        }
        else{
            a+='1';
            b+='1';
        }
    }
    cout << a << ndl;
    cout << b << ndl;
}