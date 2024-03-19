/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 13-03-2024  11:49:27
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

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll i, n, m, k, j,x; cin >> n>>m>>x;
    vector<int>ans;
    set<int>a;
    a.insert(x);
    for(int i=0; i<m; i++)
    {
        set<int>b;
        ll dis;
        char c;
        cin >> dis >> c;
        if(c=='0'){
            for(auto i:a){
                ll val = (i+dis);
                if(val>n) val%=n;
                b.insert(val);
            }
        }
        else if(c=='1'){
            for(auto i:a){
                ll val = (i-dis+n);
                if(val>n) val%=n;
                b.insert(val);
            }
        }
        else{
            for(auto i:a){
                ll val = (i+dis);
                if(val>n) val%=n;
                b.insert(val);
                val = (i-dis+n);
                if(val>n) val%=n;
                b.insert(val);
            }
        }
        a=b;
    }
    cout << a.size() << nl;
    for(auto i:a){
        cout << i << " ";
    }
    cout << nl;
}