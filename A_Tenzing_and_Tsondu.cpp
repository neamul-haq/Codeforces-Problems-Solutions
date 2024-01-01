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
    ll n,m,ans=0; cin >> n >> m;
    ll s1=0,s2=0;
    while(n--)
    {
        ll v;
        cin >> v;
        s1+=v;
    }

    while(m--)
    {
        ll v2;
        cin >> v2;
        s2+=v2;
    }
    if(s1>s2){
        cout << "Tsondu" << ndl;
    }
    else if(s1<s2){
        cout << "Tenzing" << ndl;
    }
    else{
        cout << "Draw" << ndl;
    }

}