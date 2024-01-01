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
    if(n%2==0){
        for(int i=1; i<=n; i++)
        {
            if(i%2==1){
                cout << i+1 << " ";
            }
            else{
                cout << i-1 << " ";
            }
        }
    }
    else{

        cout << 3 << " " << 1 << " " << 2 << " ";
        for(int i=4; i<=n; i++){
            if(i%2==0){
                cout << i+1 << " ";
            }
            else{
                cout << i-1 << " ";
            }
        }
    }
    cout << ndl;

}