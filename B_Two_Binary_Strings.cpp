/*
AUTHOR: Neyamul_Haq
CREATED: 02-09-2023  10:16:33
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
#define f(i,n) for(int i=0; i<n; i++)
#define ump unordered_map<int,int>um;
#define mp map<int,int>m;
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
    string a,b; cin >> a >> b;
    int r,l;
    int n=sz(a);
    vector<int>on;
    unordered_map<int,int>m;
    for(int i=1; i<n; i++){
        if(a[i]=='1' && b[i]=='1'){
            on.push_back(i);
        }
    }
    for(int i=n-2; i>=0; i--){
        if(a[i]=='0' && b[i]=='0'){
            m[i]++;
        }
    }
    //cout << l << " " << r << ndl;
    for(int i=0; i<sz(on); i++){
        if(m[on[i]-1]){
            cyes
            return;
        }
    }
    cno

}