/*
AUTHOR: Neyamul_Haq
CREATED: 07-10-2023  23:32:08
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
#define MAX 32000
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
vector<int> primes;
int cs=1;
vector<int>List;
void sieve() {
    bool isPrime[MAX];
    for (int i = 0; i < MAX; ++i) isPrime[i] = true;
    for (int i = 3; i * i <= MAX; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i < MAX; i += 2) {
        if (isPrime[i]) primes.push_back(i);
    }
}

void primeFactorize(int n){//O(log n)
    
    for(int i=0; primes[i]*primes[i]<=n; i++){
        if(n%primes[i]==0){
            while(n%primes[i]==0){
                n/=primes[i];
                List.push_back(primes[i]);
            }
        }
    }
    if(n>1){
        List.push_back(n);
    }
}
int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    sieve();
    while(t--) solve();
}

void solve(){
    int n;
    cin >> n;
    primeFactorize(n);
    int s=0;
    for(auto u:List){
        s+=u;
    }
    if(s<=41){
        while(s!=41){
            s++;
            List.push_back(1);
        }
    }
    else{
        cout << "Case #" << cs << ": ";
        cout << -1 << ndl;
        List.clear();
        cs++;
        return;
    }
    cout << "Case #" << cs << ": "<<List.size() << " ";
    for(auto u:List){
        cout << u << " ";
    }
    cout << ndl;
    List.clear();
    cs++;
}