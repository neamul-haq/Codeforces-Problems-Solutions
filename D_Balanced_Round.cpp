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
    int n,k,ans=0,ans2=0; cin >> n >> k;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    if(n==1){
        cout << 0 << ndl;
        return;
    }
    sort(all(a));

    for(int i=0; i<n-1; i++)
    {
        if((abs(a[i]-a[i+1]))>k){
            ans=n-i-1;
            break;
        } 
    }
    for(int j=n-1; j>0; j--)
    {
        if(abs(a[j]-a[j-1])>k){
            ans2=j;
            break;
        } 
    }
    int mx=INT_MIN;
    int cnt=0;
    for(int i=0; i<n-1; i++)
    {
        if((abs(a[i]-a[i+1]))>k){
            cnt=0;
        } 
        else cnt++;
        mx=max(mx,cnt);
    }
    cout << min({ans,ans2,(n-mx-1)}) << ndl;
}