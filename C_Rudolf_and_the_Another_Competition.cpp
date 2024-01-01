/*
*/
#include <bits/stdc++.h>
using namespace std;
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
    ll n,m,h,ans=0; cin >> n >> m >> h;
    pair<ll,ll>rud;
    multiset<pair<ll,ll>>s;
    for(int i=0; i<n; i++)
    {
        vector<ll>a(m);
        pair<ll,ll>p;
        for(int j=0; j<m; j++)
        {
            cin >> a[j];
        }
        sort(all(a));

        for(int k=1; k<m; k++){
            a[k]=a[k]+a[k-1];
        }
        ll l;
        for(l=m-1; l>=0; l--)
        {
            if(a[l]<=h) {
                p.first=(l+1)*-1;
                break;
            }
        }
        for(int k=1; k<m; k++){
            a[k]=a[k]+a[k-1];
        }
        p.second=a[l];
        if(i==0){
            rud=p;
        }
        s.insert(p);
    }
    ll cnt=1;
    for(auto it:s)
    {
        if(it==rud){
            cout << cnt << ndl;
            break;
        }
        cnt++;
    }

}