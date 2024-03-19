/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 14-03-2024  16:34:44
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
#define nl '\n'
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define   Pi     2*acos(0.0)
#define   mem(a,v)   memset(a,v,sizeof(a))
#define sz(a) (int)(a).size()
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();
int mex(vector<int> &a, int N)
{
  vector<int>arr=a;
  sort(arr.begin(), arr.end());
  int mex = 0;
  for (int idx = 0; idx < N; idx++)
  {
    if (arr[idx] == mex)
    {
       mex += 1;
    }
  }
  return mex;
}
 
int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    ll i, n, m, k, j, sum = 0, x = 0; cin >> n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
       cin >> a[i];
    }
    int mexx = mex(a,n);
    //cout << mexx << nl;
    vector<pair<int,int>>ans;
    int start=1,end;
    set<int>s;
    vector<int>b;
    ll cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]<mexx) s.insert(a[i]);
        if(s.size()==mexx && !cnt){
            end=i+1;
            cnt++;
            ans.push_back({start,end});
            start = end+1;
            s.clear();
        }
    }
    if(s.size()!=mexx){
        cout << -1 << nl;
    }
    else{
        cout << ans.size()+1 << nl;
        for(auto it : ans){
            cout << it.first << " " << it.second << nl;
        }
        cout << start << " " << n << nl;
    }
}