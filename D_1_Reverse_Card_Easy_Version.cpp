#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
int main() {
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll ans=0;
        for(ll i=1; i<=m; i++){
            ll x = n/i + 1;
            ll y = x/i;
            ans+=y;
        }
        ans--;
        cout<<ans<<endl;
    }
}