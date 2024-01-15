/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 12-01-2024  15:59:21
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
ll i, n;
int mat[505][505];
int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; 
    while(t--) solve();
}

void solve(){
     cin >> n;
    vector<int>a(n+1);
    
    for(int i=1; i<=n; i++)
    {
       cin >> a[i];
       mat[i][i] = a[i];
    }
    for(int row=1; row<=n; row++){
        int i=row, j=row;
        int cnt = a[row]-1;
        while(cnt){
            if(j-1>0 && mat[i][j-1]==0){
                mat[i][j-1] = a[row];
                cnt--;
                j--;
            }
            else{
                mat[i+1][j] = a[row];
                i++;
                cnt--;
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << mat[i][j] << " ";
        }
        cout <<  nl;
    }
}