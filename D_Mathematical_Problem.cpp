/*
AUTHOR: Neyamul_Haq
CREATED: 01-01-2024  11:35:03
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
vector<vector<string>>squares(100);
void makeSqr(int n){
    if(n>99) return;
    for(int i=0; i<n-2; i++){
            string s2=squares[n-2][i];
        squares[n].push_back(s2+"00");
    }
    int x=(n-3)/2;
    string s(x,'0');
    squares[n].push_back("1"+s+"6"+s+"9");
    squares[n].push_back("9"+s+"6"+s+"1");
    makeSqr(n+2);
}
int main()
{
#ifndef LOKAL
    fast()
#endif

    squares[1].push_back("1");
    squares[3].push_back("169");
    squares[3].push_back("961");
    squares[3].push_back("196");

    makeSqr(5);
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cout << squares[n][i] << nl;
    }
}
