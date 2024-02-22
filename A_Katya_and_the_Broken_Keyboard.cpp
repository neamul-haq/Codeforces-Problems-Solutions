/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 15-02-2024  12:16:13
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
    string s; cin >> s;

    int n;  cin >> n;
    s = '#' + s + '#';
    ll c[27]{0};
    vector<ll> v[30];
    for(ll i = 0; i < n; i++){
        char ch;
        ll x;
        cin >> ch >> x;
        c[ch - 'a'] = x;
        //cout << ch << ' ' << c[ch - 'a'] << '\n';
    }
    ll ans = 0, d = 0;

    for(ll i = 1; i < s.size() - 1; i++){
        if(c[s[i] - 'a']){
            if(!d) d = 1;
            if(s[i] == s[i + 1]){
                d++;
            }
            else{
                //cout << s[i] << '\n';
                v[s[i] - 'a'].push_back(d);
                d = 0;
            }
        }
        else if(!c[s[i] - 'a']) ans++;
    }

    for(ll i = 0; i < 27; i++){
        if(v[i].size()){
            for(auto j : v[i]){
               
                ll res = ((j + (c[i] - 2)) / (c[i] - 1)) * 2;
                
                ans += res;
            }
            //cout << '\n';
        }
    }


    cout << ans - 1 << '\n';

}