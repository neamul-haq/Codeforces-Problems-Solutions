/*
AUTHOR: Neyamul_Haq
CREATED: 24-12-2023  21:15:42
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
#define f(strt,end) for(int i=strt; i<=end; i++)
#define sz(a) (int)(a).size()
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
map<pair<int,int>,bool>mp;
int hashing(string s,int base)
{
    ll val=1;
    ll ans=0;
    for(char c:s)
    {
        int ascii = c-'a'+1;
        ans+=((ascii%mod)*(val%mod))%mod;
        ans=ans%mod;
        // mod formula
        // (a*b)%mod = ((a%mod) * (b%mod))%mod;
        val=((val%mod)*(base%mod))%mod;
    }
    return ans;
}
ll cnt=0;
void fun(string s){
    if(mp[make_pair(hashing(s,2),hashing(s,3))]) return;
    else mp[make_pair(hashing(s,2),hashing(s,3))]=true;
    cnt++;
    if(s.size()==1) return;
    string s2=s;
    string s5=s;
    string s3 = s2.erase(0,1);
    string s4 = s5.erase(1,1);
    fun(s3);
    fun(s4);
}
int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll i, n, m, k, j, x = 0, ans=0; cin >> n;
    string s; cin >> s;
    fun(s);
    cout << cnt << ndl;
    cnt=0;
    mp.clear();
}