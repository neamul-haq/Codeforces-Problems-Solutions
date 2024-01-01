/*
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
    ll t=1; 
    while(t--) solve();
}

void solve(){
    int n; cin >> n;
    ll ans=0;
    vector<int>a(n);
    vector<ll>inv(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ordered_set<ll>os;
    for(int i=n-1; i>=0; i--)
    {
        inv[i]=os.order_of_key(a[i]);
        os.insert(a[i]);
    }
    os.clear();
    for(int i=0; i<n; i++)
    {
        ll less=os.order_of_key(a[i]);
        ll grter=os.size()-less;
        ans+=(grter*inv[i]);
        os.insert(a[i]);
    }
    print
}