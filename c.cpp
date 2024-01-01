/*
AUTHOR: Neyamul_Haq
CREATED: 11-10-2023  16:22:40
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
    ll n,ans=0; cin >> n;
    vector<int>v(n);
    map<int,int>m;
    ll a,b;
    cin >> a >> b;
    for(int i=0; i<n; i++){
        cin >> v[i];
        m[v[i]]++;
    }
    v.push_back(100003);
    sort(all(v));
    //   auto it = unique(v.begin(), v.end());

    // v.resize(distance(v.begin(), it));
    for(int i=0; i<n; i++){
        int l=a-v[i];
        int r=b-v[i];
        if(l<1) l=0;
        if(r<1) r=0;
        if(l<v[i]) l=v[i];
        if(l>r) continue;
        int fst=lower_bound(all(v),l)-v.begin();
        int lst=upper_bound(all(v),r)-v.begin();
        if(l==v[i]){
            ans--;
        }
        debug(fst,lst);
        ans+=(lst-fst);
    }
    print
}