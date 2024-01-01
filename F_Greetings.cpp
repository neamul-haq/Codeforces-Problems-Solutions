/*
AUTHOR: Neyamul_Haq
CREATED: 29-12-2023  21:15:21
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
    int n; cin >> n;
    vector<pair<ll, ll>> events;
    for(int i = 1; i <= n; i++) {
        ll l, r; cin >> l >> r;
        events.push_back({l, r});
    }
    sort(events.begin(), events.end());
    debug(events);
    ordered_set<ll> os;
    ll ans = 0;
    for(int i = n - 1; i >= 0; i--) {
        ans += os.order_of_key(events[i].second);
        os.insert(events[i].second);
        debug(i, ans);
    }
    cout << ans << "\n";
    
}