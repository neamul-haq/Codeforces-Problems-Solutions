/*
AUTHOR: Neyamul_Haq
CREATED: 09-10-2023  21:25:58
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
double dis(pair<int,int>p1,pair<int,int>p2){
    int a=p1.first, b=p1.second,c=p2.first, d=p2.second;
    return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}
void solve(){
    double ans=100000000;
    pair<int,int>p,a,b,o;
    cin >> p.first >> p.second;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    o={0,0};
    double start=0,end=100000000;
    while(abs(start-end)>0.00000000001){
        bool ok=false;
        double mid=start+(end-start)/2;
        double ao=dis(a,o);
        double ap=dis(a,p);
        double bo=dis(b,o);
        double bp=dis(b,p);
        double ab=dis(b,a);
        if(ao<=mid && ap<=mid){
            ans=min(ans,mid);
            ok=true;
        }
        if(bo<=mid && bp<=mid){
            ans=min(ans,mid);
            ok=true;
        }
        if(ao<=mid && bp<=mid && ab<=mid+mid){
            ans=min(ans,mid);
            ok=true;
        }
        if(bo<=mid && ap<=mid && ab<=mid+mid){
            ans=min(ans,mid);
            ok=true;
        }
        if(!ok){
            start=mid;
        }
        else{
            end=mid;
        }

    }
    cout << fixed << setprecision(10) << ans << ndl;
}