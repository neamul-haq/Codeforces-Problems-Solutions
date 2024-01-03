/*
AUTHOR: Neyamul_Haq
CREATED: 02-01-2024  11:03:25
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
    ll t=1; 
    while(t--) solve();
}

void solve(){
    ll i, k, j, q, ans=0; cin >> q;
    ll left=0;
    ll right=0;
    map<ll,pair<char,ll>>m;
    while(q--){
        char c;
        ll val;
        cin >> c >> val;
        if(c=='L'){
            left++;
            m[val] = {'L',left};
        }
        else if(c=='R'){
            right++;
            m[val] = {'R', right};
        }
        else{
            if(m[val].first == 'L') cout << min(left-m[val].second,right+m[val].second-1) << nl;
            else{
                cout << min(right-m[val].second,left+m[val].second-1) << nl;
            }
        }
    }
}