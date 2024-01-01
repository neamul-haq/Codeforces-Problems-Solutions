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
    int n;  cin>>n;
      vector<ll> a(n);
      for(int i=0;i<n;i++){
         cin>>a[i];
      }

      vector<ll> freq(n+2,0);
      for(int i=0;i<n;i++){
         if(a[i]>n)continue;
         freq[a[i]]++;
      }

      ll ans=0;
      for(int i=1;i<=n;i++){
         ll here=0;
         for(ll x=1;x*x<=i;x++){
            if(i%x==0){
               here+=freq[x];
               if(x*x!=i){
                  here+=freq[i/x];
               }
            }
         }
         ans=max(ans,here);
      }

      cout<<ans<<endl;
}
