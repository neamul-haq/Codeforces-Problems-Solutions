/*
AUTHOR: Neyamul_Haq
CREATED: 17-08-2023  23:52:23
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
    ll n,ans=0; 
    string s; cin >> s;
    n=s.size();
    if(n==2 && s[0]=='(' && s[1]==')'){
        cno
        return;
    }
    cout << "YES" << ndl;
    bool koro=false;
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]) koro=true;
    }
    if(koro){
        for(int i=0; i<n; i++){
            cout << "()";
        }
    }
    else{
        for(int i=0; i<n; i++){
            cout << '(';
        }
        for(int i=0; i<n; i++){
            cout << ')';
        }
    }
    cout << ndl;
}