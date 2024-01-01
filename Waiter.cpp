/*
AUTHOR: Neyamul_Haq
CREATED: 12-12-2023  18:34:00
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
const int maxx=1e4+10;
bool prime[maxx];
vector<int>primes;
void sieve()
{
    prime[1]=false;
    for(int i=2; i<=maxx; i++)
    {
        prime[i]=true;
    }
    for(int i=2; i*i<=maxx; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j+=i){
                prime[j]=false;
            }
        }
    }
}
int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1;
    sieve();
    for(int i=2; i<maxx; i++){
        if(prime[i]) primes.push_back(i);
    }
    while(t--) solve();
}

void solve(){
    ll i, n, q, k, j, s = 0, x = 0, ans=0; cin >> n >> q;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
    }
    map<int,bool>mp;
    int pr=0;   
    while(q--){
        stack<int>st;
        int qDiv=primes[pr];
        for(int i=n-1; i>=0; i--){
            if(a[i]%qDiv==0 && !mp[i]){
                st.push(a[i]);
                mp[i]=true;
            }
        }
        while(!st.empty()){
            cout << st.top() << ndl;
            st.pop();
        }
        pr++;
    }
    for(int i=0; i<n; i++){
        if(!mp[i]){
            cout << a[i] << ndl;
        }
    }
}