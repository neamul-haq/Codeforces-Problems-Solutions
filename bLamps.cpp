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
    ll n,c=0,ans=0; cin >> n;

    map<int, multiset<int,greater<int>>>m;
    for(int i=1; i<=n; i++)
    {
        int a,b;
        cin >> a >> b;
        m[a].insert(b);
    }
    for(int i=1; i<=n; i++)
    {
        int cnt=1;
        for(auto val : m[i])
        {
            c+=val;
            if(cnt==i) break;
            cnt++;
        }
    }
    cout << c << "\n";
}
