/*
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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


const int maxx=2e5;
bool prime[maxx];

void sieve()
{
    prime[1]=false;
    for(int i=2; i<=maxx; i++)
    {
        prime[i]=true;
    }
    for(int i=2; i*i<=maxx; i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i; j<=maxx; j+=i){
                prime[j]=false;
            }
        }
    }
}

int main()
{
    fast()
    sieve();
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){

    int n,ans=0; cin >> n;
    vector<int>a;

    for(int i=2; i<=n; i++){
        if(prime[i]){
            a.push_back(i);
        }
    }
    reverse(all(a));
    for(int i=n; i>=1; i--)
    {
        if(!prime[i]){
            a.push_back(i);
        }
    }
    vector<int>b(n);
    int l=0;
    int r=n-1;
    for(int i=0; i<n; i+=2)
    {
        b[l]=a[i];
        if(l!=r) b[r]=a[i+1];
        l++;
        r--;
    }
    for(auto u:b) cout << u << " ";
    cout << ndl;

}