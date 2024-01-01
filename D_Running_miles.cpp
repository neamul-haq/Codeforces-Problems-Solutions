#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nd '\n'
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
    ll n,c,ans=INT_MIN; cin >> n;
    vector<ll>a(n);
    for(auto &u: a) cin >> u;

    ll suffix[n],prefix[n];

    suffix[0] = a[0]+1;

    for(int i=1; i<n; i++)
    {
        suffix[i] = max(suffix[i-1],a[i]+i+1);
    }

    prefix[n-1] = a[n-1] - n;

    for(int i=n-2; i>=0; i--)
    {
        prefix[i] = max(prefix[i+1], a[i]-i-1);
    }

    for(int i=1; i<n-1; i++)
    {
        ans = max(a[i]+suffix[i-1]+prefix[i+1],ans);
    }
    cout << ans << nd;
}

