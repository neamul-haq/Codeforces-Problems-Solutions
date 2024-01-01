/*
AUTHOR: Neyamul_Haq
CREATED: 11-08-2023  23:05:59
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
    ll n,ans=0; cin >> n;
    vector<int>a(n);
    f(i,n){
        cin >> a[i];
    }
    sort(all(a));
    int lim=(n+1)/2;
    vector<int>b;
    if(n%2==1){
        int i=0,j=lim-1;
        while(j!=n){
        if(i<lim-1) b.push_back(a[i]);
        b.push_back(a[j]);
        i++;
        j++;
    }
    }
    else{
        int i=0,j=lim;
        while(j!=n){
        b.push_back(a[i]);
        b.push_back(a[j]);
        i++;
        j++;
        }
    }
    b.push_back(a[0]);
    // for(auto u:b){
    //     cout << u << " ";
    // }
    // cout << ndl;
    for(int i=1; i<n; i++){
        if(b[i]>b[i-1] && b[i]>b[i+1]){
            continue;
        }
        if(b[i]<b[i-1] && b[i]<b[i+1]){
            continue;
        }
        cno
        return;
    }
    b.pop_back();
    cyes
    for(auto u:b){
        cout << u << " ";
    }
    cout << ndl;
}