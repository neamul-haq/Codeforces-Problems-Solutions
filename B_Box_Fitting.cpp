/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 12-01-2024  21:07:44
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

int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    int n,w,ans=1;
    cin >> n >> w;
    int arr[n+1];
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    sort(arr+1,arr+n+1,greater<int>());
    priority_queue<int> pq;
    pq.push(w);
    for(int i=1; i<=n; i++)
    {
        if(pq.top()>=arr[i])
        {
            ll x=pq.top();
            pq.pop();
            x-=arr[i];
            pq.push(x);
        }
        else
        {
            pq.push(w-arr[i]);
            ans++;
        }
        
    }
    cout << ans << nl;
}