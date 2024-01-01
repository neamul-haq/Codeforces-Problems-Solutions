/*
AUTHOR: Neyamul_Haq
CREATED: 18-08-2023  00:24:46
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
    ll m,k,a1,ak,ans=0; cin >> m >> k >> a1 >> ak;
    if(m>k*ak){
        m-=(k*ak);
    }
    else{
        m%=k;
    }
    if(m<a1){
        cout << 0 << ndl;
        return;
    }
    else{
        ans=((m-a1)/k)+(m-a1)%k;
        if(a1>=m%k) ans=min(ans, (m-a1+k-1)/k);
    }
    print
}