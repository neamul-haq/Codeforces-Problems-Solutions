/*
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
    ll n,ans=0; cin >> n;
    vector<ll>a(n+1);
    vector<ll>b(n+1);
    for(ll i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    if(n<=2){
        cout << 0 << ndl;
        return;
    }
    sort(a.begin()+1,a.end());
    b[1]=a[1];
    for(ll i=2; i<=n; i++)
    {
        b[i]=b[i-1]+a[i];
    }
    for(ll i=3; i<=n; i++)
    {
        ans+=(a[i]*(i-2)-b[i-2]);
    }
    cout << ans*-1 << ndl;
}