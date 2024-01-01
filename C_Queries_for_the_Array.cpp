/*
AUTHOR: Neyamul_Haq
CREATED: 02-09-2023  11:13:41
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
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define f(i,n) for(int i=0; i<n; i++)
#define ump unordered_map<int,int>um;
#define mp map<int,int>m;
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
    string s; cin >> s;
    bool srt=true;
    bool dsrt=true;
    int cnt=0;
    if(sz(s)==1 && s[0]=='0'){
        cno
        return;
    } 
    for(int i=0; i<sz(s)-1; i++){
        if(s[i]=='1' && s[i+1]=='0'){
            cno
            return;
        }
        else if(s[i]=='0' && s[i+1]=='1'){
            cno
            return;
        }
    }
    for(int i=0; i<sz(s); i++){
        if(s[i]=='+'){
            cnt++;
            if(cnt==2){
                srt=true;
                dsrt=true;
            }
        } 
        else if(s[i]=='-'){
            cnt--;
            // if(cnt==2){
            //     srt=true;
            //     dsrt=true;
            // }
        } 
        else if(s[i]=='1'){
            if(cnt==1 or cnt==0){
                srt=true;
                dsrt=true;
                continue;
            }
            if(!srt){
                cno
                return;
            }
            srt=true;
            dsrt=false;
        }
        else if(s[i]=='0'){
            if(cnt==1 or cnt==0){
                cno
                return;
            }
            if(srt){
                cno
                return;
            }
            dsrt=true;
            dsrt=false;
        }
    }
    cyes

}