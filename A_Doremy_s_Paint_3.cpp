/*
AUTHOR: Neyamul_Haq
CREATED: 28-10-2023  22:21:10
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
    vector<int>a(n);
    set<int>st;
    map<int,int>mp;
    
    f(0,n-1){
        cin >> a[i];
        st.insert(a[i]);
        mp[a[i]]++;
    }
    if(n==2){
        cyes
        return;
    }
    if(st.size()>2 ){
        cno
        return;
    }
    else if(st.size()==1){
        cyes
    }
    else{
        ll v1,v2;
        for(auto it:mp){
            v1=it.second;
            break;
        }
        for(auto it:mp){
            v2=it.second;
        }
        //cout << v1<<v2<<ndl;
        if(abs(v1-v2)<=1){
            cyes
        }
        else cno
    }

}


