/*
AUTHOR: Neyamul_Haq
CREATED: 12-08-2023  22:09:27
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
#define f(i,n) for(int i=0; i<n; i++)
#define ump unordered_map<int,int>um;
#define mp map<int,int>m;
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
    int n,ans=0; cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        a[i]=i+1;
    }
    for(int i=n-1; i>=1; i--){
        int m=i;
        ll s=0;
        int k=i;
        int mx=INT_MIN;
        for(int j=n-1; j>=0; j--){
            s+=(a[j]*k);
            mx=max(mx,a[j]*k);
            if(k==n){
                m--;
                ll val=m*(m+1)*(2*m+1);
                val=val/6;
                s+=val;
                s-=mx;
                if(s>ans) ans=s;
                break;
            }
            k++;
        }
    }
    print
}