/*
AUTHOR: Neyamul_Haq
CREATED: 22-10-2023  14:22:36
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
#define f(strt, end) for (int i = strt; i <= end; i++)
#define sz(a) (int)(a).size()
int const mod = 1e9 + 7;
const ll inf = 1e18;
const ll N = 1e3;
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
#ifndef LOKAL
    fast()
#endif
        ll t = 1;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    ll n,m; cin>>n>>m;
 
       vector<pair<ll,ll>> vp(n+1);
 
       set<ll> st;
 
 
       for(ll i=0;i<n;i++){
        cin>>vp[i].first>>vp[i].second;
        st.insert(vp[i].first);
        st.insert(vp[i].second+1);
       }
        debug(st);
        map<ll,ll> pref;
 
        for(ll i=0;i<n;i++){
            if(vp[i].first>1){
                pref[vp[i].first]++;
                pref[vp[i].second+1]--;
            }
 
        }
        ll mx1=0,sum=0;

        for(auto it: st){
            sum+= pref[it];  
            mx1= max(mx1,sum);
        }
        debug(pref,mx1);
        pref.clear();
 
        for(ll i=0;i<n;i++){
            if(vp[i].second<m){
                pref[vp[i].first]++;
                pref[vp[i].second+1]--;
            }
 
        }
        ll mx2=0; sum=0;
        for(auto it: st){
            sum+= pref[it];  
            mx1= max(mx1,sum);
        }
        debug(pref,mx2);
        //cout<<mx1<<' '<<mx2<<endl;
 
        cout<<max(mx1,mx2)<<endl;
}