/*
AUTHOR: Neyamul_Haq
CREATED: 28-12-2023  20:40:52
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
    ll i, n, m, k, j, s = 0, x = 0, ans=0;
    char a[3][3];
    char c;
    for(int i=0; i<3; i++){
        bool AA=false;
        bool BB=false;
        bool CC=false;
        for(int j=0; j<3; j++){
            cin >> a[i][j];
            if(a[i][j]=='A') AA=true;
            if(a[i][j]=='B') BB=true;
            if(a[i][j]=='C') CC=true;
            //if(a[i]=='A') A=true;
        }
        if(!AA) c='A';
        if(!BB) c='B';
        if(!CC) c='C';
    }
    cout << c << ndl;
}