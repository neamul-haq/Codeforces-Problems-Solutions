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
    bool ok=true;
    ll mn=INT_MIN;
    string s="";
    ll mx;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
         
        if(i==0){
            s+='1';
            mx=a[0];
        }
        else{
            if(a[i]>=mx and ok){
                s+='1';
                mx=a[i];
            } 
            else{
                if(ok and a[i]<=a[0]){
                    s+='1';
                    mn=a[i];
                    ok=false;
                    continue;
                }
                else if(!ok){
                    if(a[i]<=a[0] and a[i]>=mn){
                    s+='1';
                    mn=a[i];
                    continue;
                    }
                }
                s+='0';    
            }
        }
    }
    cout << s << ndl;

}