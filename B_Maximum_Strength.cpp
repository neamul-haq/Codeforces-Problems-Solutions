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
    ll ans=0;
    string s,s2; cin >> s >> s2;

    if(s.size()<s2.size())
    {
        ll dif=s2.size()-s.size();
        while(dif--)
        {
            s.insert(0,"0");
        }
    }
    
    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]!=s[i]) {
            ans+=abs(s2[i]-s[i]);
            if(i!=s2.size()-1)
            {
                ans+=(9*(s2.size()-i-1));
                break;
            }
        }
    }
    
    print
}