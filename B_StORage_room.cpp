/*
AUTHOR: Neyamul_Haq
CREATED: 01-12-2023  11:52:19
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
    ll i, n, m, k, j, s = 0, x = 0, ans=0; cin >> n;
    int a[n][n];
    vector<int>b;
    for(int i=0; i<n; i++){
        
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        int rs;
        if(i!=0) rs=a[i][0];
        else rs = a[i][1];
        //cout << rs<< ndl;
        for(int j=0; j<n; j++){
            if(i!=j){
                rs = (rs&a[i][j]);
                //cout << rs<< ndl;
            }
        }
        b.push_back(rs);
    }

    if(n==1){
        cyes
        cout << 7 << ndl;
        return;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]!=(b[i]|b[j]) && i!=j){
                cno
                return;
            }
        }
    }
    cyes
    for(int i=0; i<n; i++){
        cout << b[i] << " ";
    }
    cout << ndl;
}