/*
AUTHOR: Neyamul_Haq
CREATED: 10-12-2023  19:49:17
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
    ll i, n, m, k, j, x = 0; cin >> n >>m;
    string s; cin >> s;
    vector<int>a(n+1);
    for(int i=0; i<m; i++)
    {
       int val;
       cin >> val;
       a[0]++;
       a[val]--;
    }
    for(int i=1; i<n; i++){
        a[i]+=a[i-1];
    }
    vector<int>ans(26);
    for(int i=0; i<n; i++){
        ans[s[i]-'a']+=a[i];
    }
    for(int i=0; i<n; i++){
        ans[s[i]-'a']++;
    }
    for(auto u:ans){
        cout << u  << " ";
    }
    cout << ndl;
}