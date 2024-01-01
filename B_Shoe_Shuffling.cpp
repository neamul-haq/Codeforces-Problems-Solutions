/*
AUTHOR: Neyamul_Haq
CREATED: 30-12-2023  10:18:38
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
#define   Pi     2*acos(0.0)
#define   mem(a,v)   memset(a,v,sizeof(a))
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
    ll i, n, m, k, j, s = 0, x = 0; cin >> n;
    vector<int>a(n+1);
    vector<int>ans;
    
    for(int i=1; i<=n; i++)
    {
       cin >> a[i];
    }
    for(int i=1; i<=n; )
    {
        bool two=false,three=false,four=false;
        if(i+1<=n && a[i]==a[i+1]) two = true;
        if(i+2<=n && a[i]==a[i+2]) three = true;
        if(i+3<=n && a[i]==a[i+3]) four = true;
        if(!two){
            cout << -1 << ndl;
            return;
        }
        if(four){
            ans.push_back(i+1);
            ans.push_back(i);
            i+=2;
        } 
        else if(three){
            ans.push_back(i+2);
            ans.push_back(i);
            ans.push_back(i+1);
            i+=3;
        }
        else{
            ans.push_back(i+1);
            ans.push_back(i);
            i+=2;
        }
    }
    for(auto u:ans){
        cout << u << " ";
    }
    cout << ndl;
    
}