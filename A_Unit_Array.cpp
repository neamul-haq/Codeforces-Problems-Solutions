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
    ll n,ans=0,mi=0,p=0; cin >> n;

    for(ll i=0; i<n; i++)
    {
        ll in;
        cin >> in;
        if(in==-1) mi++;
        else p++;
    }

    if(p>=mi){
        if(mi%2!=0)
        {
            ans=1;
        }
    }
    else{
        ans=(mi+1-p)/2;
        mi-=ans;
        if(mi%2) ans++;
    }
    print

}