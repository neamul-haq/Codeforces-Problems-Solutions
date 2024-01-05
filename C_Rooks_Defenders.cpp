/*
AUTHOR: Neyamul_Haq
CREATED: 03-01-2024  13:31:45
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
#define nl '\n'
#define cyes cout << "Yes" << '\n';
#define cno cout << "No" << '\n';
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
    ll i, n, m, k, j, s = 0, x = 0,type, ans=0; cin >> n >>m;
    map<ll,ll>row,col;
    ordered_set<ll>rw,co;
    while(m--){
        cin >> type;
        if(type==1){
            ll x, y;
            cin >> x >> y;
            rw.insert(x);
            co.insert(y);
            row[x]++;
            col[y]++;
        }
        else if(type==2){
            ll x, y;
            cin >> x >> y;
            row[x]--;
            col[y]--;
            if(row[x]==0) rw.erase(x);
            if(col[y]==0) co.erase(y);
        }
        else{
            ll x1,y1,x2,y2;
            cin >> x1>>y1>>x2>>y2;
            int cnt = rw.order_of_key(x2+1)-rw.order_of_key(x1);
            int cnt2 = co.order_of_key(y2+1)-co.order_of_key(y1);

            if(cnt==(x2-x1+1) or cnt2==(y2-y1+1)){
                cyes
            }
            else{
                cno
            }
        }
    }
}