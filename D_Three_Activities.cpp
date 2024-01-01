/*
AUTHOR: Neyamul_Haq
CREATED: 19-12-2023  21:39:09
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
    ll n; cin>>n;
    vector<ll>a(n),b(n),c(n);
    vector<pair<ll,ll>>vp1,vp2,vp3;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        vp1.push_back({a[i],i});
    }
    for(ll i=0; i<n; i++){
        cin>>b[i];
        vp2.push_back({b[i],i});
    }
    for(ll i=0; i<n; i++){
        cin>>c[i];
        vp3.push_back({c[i],i});
    }
    sort(all(vp1),greater<pair<int,int>>());
    sort(all(vp2),greater<pair<int,int>>());
    sort(all(vp3),greater<pair<int,int>>());
 
    ll aa[3], bb[3], cc[3];


    for(ll i=0; i<3; i++){
        aa[i]=vp1[i].second;
    }
    for(ll i=0; i<3; i++){
        bb[i]=vp2[i].second;
    }

    for(ll i=0; i<3; i++){
        cc[i]=vp3[i].second;
    }
    ll sum=0, ans=0;
    for(ll i=0; i<3; i++){
        for(ll j=0; j<3; j++){
            for(ll k=0; k<3; k++){
                if(aa[i]!=bb[j] and bb[j]!=cc[k] and aa[i]!=cc[k]){
                    sum=(a[aa[i]]+b[bb[j]]+c[cc[k]]);
                    ans=max(ans,sum);
                }
            }
        }
    }
    cout<<ans<<endl;
}