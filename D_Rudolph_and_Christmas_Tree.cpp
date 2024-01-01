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
    ll n,d,h; cin >> n >> d >> h;
    vector<ll>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    double ans=d/2;
    ans=ans*h*n;
    for(int i=1; i<n; i++)
    {
        ll dif=a[i]-a[i-1];
        double ans2=d/2;
        double extra=(ans2+(ans2-dif))*dif;
        ans2=ans2*h;
        
        if(dif<h){
            ans-=(ans2-extra);
        }
    }
    cout <<fixed<<setprecision(7)<< ans << ndl; 
}