/*
Neamul Haq
University of Barisal
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define umap unordered_map<ll,ll>m;
#define map map<ll,ll>m;
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
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        ans+=abs(a[i]);
    }
    ll cnt=0;
    ll prv=1;

    for(ll i=0; i<n; i++)
    {
        if(a[i]<0){
            prv=-1;
            if(i==n-1 && prv==-1){
                cnt++;
            }
            continue;
        } 
        else if(a[i]==0){
            if(i==n-1 && prv==-1){
                cnt++;
            }
            continue;
        }
        else{
            if(prv==-1){
                cnt++;
                prv=1;
            }
        }
    }
    cout << ans << " " << cnt << ndl;;
    

}