#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
    ll n,k, c=0; cin >> n >> k;

    vector<int>ar(n+1);

    for(int i=1; i<=n; i+=k)
    {
        ar[i]=1;
        c++;
    }

    if(!ar[n]) c++;
    cout << c << "\n";

}
