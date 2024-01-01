/*
AUTHOR: Neyamul_Haq
CREATED: 12-08-2023  21:21:21
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define f(i,n) for(int i=0; i<n; i++)
#define ump unordered_map<int,int>um;
#define mp map<int,int>m;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    int n; cin >> n;
    vector<int>v;
    ll ans=0,s=0;
    int mn=INT_MAX;
    while(n--){
        int m;
        cin >> m;
        vector<int>a(m);
        f(i,m){
            cin >> a[i];
            mn=min(mn,a[i]);
        }
        sort(all(a));
        v.push_back(a[1]);
        s+=a[1];
    }
    // for(auto u:v){
    //     cout << u << " ";
    // }
    //cout << ndl;
    //cout << mn << ndl;
    for(int i=0; i<v.size(); i++){
        ll val=s-v[i]+mn;
        //cout << val << ndl;
        if(val>ans) ans=val;
    }
    cout << ans << ndl;
}