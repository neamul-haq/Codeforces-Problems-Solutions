/*
AUTHOR: Neyamul_Haq
CREATED: 31-12-2023  09:19:16
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
    int i, n, m, k, j, s = 0,  ans=INT_MAX; cin >> n>>m;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
    }
    vector<int>degrees(n);
    int mnPair = INT_MAX;
    for(int i=0; i<m; i++){
        int x,y;
        cin >> x >> y;
        degrees[x-1]++;
        degrees[y-1]++;
        mnPair = min(mnPair, a[x-1]+a[y-1]);
    }

    if(m%2==0){
        cout << 0 << nl;
    }
    else{
        for(int i=0; i<n; i++){
            if(degrees[i]%2==1){
                ans = min(ans,a[i]);
            }
        }
        ans = min(ans, mnPair);
        cout << ans << nl;
    }
}