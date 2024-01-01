/*
AUTHOR: Neyamul_Haq
CREATED: 22-11-2023  09:39:55
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
    ll i, n, m, k; cin >> n >> m >> k;
    if(abs(n+m+k)%2==1 or k<n+m-2){//-k ba + k 
        cno
        return;
    }
    cyes
    char a[n+5][m-1+5];
    char b[n-1+5][m+5];
    memset(a,'B',sizeof(a));
    memset(b,'B',sizeof(b));
    for(int j=0; j<m-1; j++){
        if(j%2==0) a[0][j]='R';
    }
     a[1][0]='R';
    if((n+m)%2 == 1){
        a[n-2][m-2]='R';
        a[n-1][m-2]='R';
    }
    if((m%2)==0){
        for(int i=0; i<n; i++){
            if(i%2==1){
                b[i][m-1]='R';
            }
        }
    }
    else{
        for(int i=0; i<n; i++){
            if(i%2==0) b[i][m-1]='R';
        }
    }
    if((n+m)%2==0){
        b[n-2][m-2]='R';
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m-1; j++){
            cout << a[i][j] << " ";
        }
        cout << ndl;
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<m; j++){
            cout << b[i][j] << " ";
        }
        cout   << ndl;
    }
}
