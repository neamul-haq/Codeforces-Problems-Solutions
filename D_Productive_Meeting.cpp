/*
AUTHOR: Neyamul_Haq
CREATED: 02-01-2024  12:40:04
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
    ll i, n, m, x = 0; cin >> n;
    vector<int>a(n);
    vector<pair<int,int>>ans;
    multiset<pair<int,int>, greater<pair<int,int>>>ms;
    //eta priority queue diao kora jay
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
       if(a[i]) ms.insert({a[i],i+1});
    }
    while(ms.size()>1){
        auto it = ms.begin();
        pair<int,int> p1 = *it;
        it++;
        pair<int,int> p2 = *it;
        ms.erase(ms.begin());
        ms.erase(it);
        x++;
        ans.push_back({p1.second,p2.second});
        p1.first--;
        p2.first--;
        if(p1.first) ms.insert(p1);
        if(p2.first) ms.insert(p2);
    }
    cout << x << nl;
    for(auto u:ans){
        cout << u.first << " " << u.second << nl;
    }
}