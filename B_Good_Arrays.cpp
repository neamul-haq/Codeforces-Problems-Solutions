/*
AUTHOR: Neyamul_Haq
CREATED: 05-08-2023  21:16:44
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
#define ump unordered_map<int,int>mp;
#define mp map<int,int>mp;
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
    ll n,ans=0,s=0,on=0; cin >> n;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]<2) on++;
        s+=a[i];
    }
    if(n==1){
        cno
        return;
    }
    ll sum=(on*2)+(n-on);
    if(sum>s){
        cno
        return;
    }
    cyes
}