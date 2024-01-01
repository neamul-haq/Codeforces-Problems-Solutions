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
    ll n,m,x,ans=0; cin >> m >> x;
    n=m;
    queue<ll>q1;
    queue<ll>q2;
    queue<ll>q3;
    while(n--)
    {
        ll v;
        cin >> v;
        q1.push(v);
    }
    n=m;
    while(n--)
    {
        ll v2;
        cin >> v2;
        q2.push(v2);
    }
    n=m;
    while(n--)
    {
        ll v3;
        cin >> v3;
        q3.push(v3);
    }
    if(x==0){
        cout << "Yes" << ndl;
        return;
    }
    bool f1=true;
    bool f2=true;
    bool f3=true;
    while(true)
    {
        if(f1 or f2 or f3)
        {
            if(!q1.empty())
            {
                if(q1.front()<=x){
                    ans=(ans|q1.front());
                    q1.pop();
                    f1=true;
                    if(ans==x) break;
                }
                else{
                    f1=false;
                }
            }
            else{
                f1=false;
            }
            if(!q2.empty())
            {
                if(q2.front()<=x){
                    ans=(ans|q2.front());
                    q2.pop();
                     if(ans==x) break;
                    f2=true;
                }
                else{
                    f2=false;
                }
            }
            else{
                f2=false;
            }
            if(!q3.empty())
            {
                if(q3.front()<=x){
                    ans=(ans|q3.front());
                    q3.pop();
                    if(ans==x) break;
                    f3=true;
                }
                else{
                    f3=false;
                }
            }
            else{
                f3=false;
            }
            if(q1.empty() && q2.empty() && q3.empty())
            {
                break;
            }
        }
        else break;
    }
    if(ans>=x){
        cout << "Yes" << ndl;
    }
    else{
        cout << "No" << ndl;
    }

}