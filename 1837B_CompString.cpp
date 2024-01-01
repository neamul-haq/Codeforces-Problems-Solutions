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
    ll t=1;
    cin >> t;
    while(t--) solve();
}

void solve()
{
    ll n,ans=0, cnt=0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
    {
        cnt++;
        if(s[i]!=s[i+1] or i==n-1) {
            ans = max(ans,cnt);
            cnt=0;
        }
    }

    cout << ans+1 << "\n";
}
