/*
AUTHOR: Neyamul_Haq
CREATED: 28-12-2023  11:38:25
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
#define ndl '\n'
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define f(strt,end) for(int i=strt; i<=end; i++)
#define sz(a) (int)(a).size()
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        string s2="";
        vector<int>v;
        int cnt=0;
        if(is_sorted(s.begin(),s.end())){
            cout << 0 << endl;
            return;
        }
        char ch = s[n-1];
        for(int i=n-1; i>=0; i--){
            if(s[i]>=ch){
                s2+=s[i];
                v.push_back(i);
                ch = s[i];
            }
        }
        debug(s2,v);
        for(int i=s2.size()-1; i>=0; i--){
            if(s2[i]==s2.back()) cnt++;
            else break;
        }
        reverse(s2.begin(),s2.end());
        for(int i=0; i<s2.size(); i++){
            s[v[i]] = s2[i];
        }
        ans = v.size()-cnt;
        if(!is_sorted(s.begin(),s.end())){
            cout << -1 << endl;
            return;
        }
        cout << ans << '\n';
}