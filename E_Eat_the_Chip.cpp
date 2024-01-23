/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 15-01-2024  21:43:00
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
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll i, n, m, k,xa,ya,xb,yb; cin >> n>>m>>xa>>ya>>xb>>yb;
    if(xa>=xb){
        cout <<  "Draw" << nl;
        return;
    }
    int x1,y1,x2,y2;
    if((xb-xa)%2==1){
        if(ya<yb){
            x1=xa,x2=xb,y1=ya,y2=yb;
            while(x1<x2){
                //cout << "ff" << nl;
                x1++;
                if(y1+1<=m) y1++;
                if(x1==x2 && y1==y2){
                    cout << "Alice" << nl;
                    return;
                }
                x2--;
                if(y2+1<=m) y2++;
            }
        }
        else if(ya>yb){
            x1=xa,x2=xb,y1=ya,y2=yb;
            while(x1<x2){
                x1++;
                if(y1-1>=1) y1--;
                if(x1==x2 && y1==y2){
                    cout << "Alice" << nl;
                    return;
                }
                x2--;
                if(y2-1>=1) y2--;
            }
        }
        else{
            cout << "Alice" << nl;
            return;
        }
    }
    else{
        if(ya>yb){
            x1=xa,x2=xb,y1=ya,y2=yb;
            while(x1<x2){
                x1++;
                if(y1+1<=m) y1++;
                x2--;
                if(y2+1<=m) y2++;
                if(x1==x2 && y1==y2){
                    cout << "Bob" << nl;
                    return;
                }
            }
        }
        else if(ya<yb){
            x1=xa,x2=xb,y1=ya,y2=yb;
            while(x1<x2){
                x1++;
                if(y1-1>=1) y1--;
                x2--;
                if(y2-1>=1) y2--;
                if(x1==x2 && y1==y2){
                    cout << "Bob" << nl;
                    return;
                }
            }
        }
        else{
            cout << "Bob" << nl;
            return;
        }
    }
    cout << "Draw" << nl;
}