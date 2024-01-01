/*
AUTHOR: Neyamul_Haq
CREATED: 12-08-2023  20:36:58
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
    list<int>b;
    list<int>c;
    bool ok=false;
    int mn=*min_element(all(a));
    for(int i=0; i<n; i++){
        if(mn==a[i]) b.push_back(a[i]);
        else c.push_back(a[i]);
        if(a[i]!=mn) ok=true;
    }
    if(!ok){
        cout << -1 << ndl;
        return;
    }
    cout << b.size() << " " << c.size() << ndl;
    for(auto it:b){
        cout << it << " ";
    }
    cout << ndl;
    for(auto it:c){
        cout << it << " ";
    }
    cout << ndl;


}