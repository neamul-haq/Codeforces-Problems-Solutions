/*
Problem_Link: https://codeforces.com/problemset/problem/1851/D
AUTHOR: Neyamul_Haq
CREATED: 04-01-2024  09:49:09
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
#define Pi 2 * acos(0.0)
#define mem(a, v) memset(a, v, sizeof(a))
#define sz(a) (int)(a).size()
int const mod = 1e9 + 7;
const ll inf = 1e18;
const ll N = 1e3;
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
#ifndef LOKAL
    fast()
#endif
        ll t = 1;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    ll i, n, x = 0, ans = 0;
    cin >> n;
    vector<ll> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    ll total = (n * (n + 1ll)) / 2ll;
    if (total < a[n - 2])
    {
        cno 
        return;
    }
    if (total != a[n - 2])
    {
        a.push_back(total);
        vector<ll> arr;
        arr.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            arr.push_back(a[i] - a[i - 1]);
        }
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] > n)
            {
                cno
                return;
            }
        }
        set<ll> s(arr.begin(), arr.end());
        if(s.size() == n) {cyes}
        else cno
    }
    else{
        vector<ll>sum;
        sum.push_back(a[0]);
        vector<bool>visited(n+2,false);
        if(a[0]<=n) visited[a[0]]=true;
        vector<ll>missing;
        for(int i=1; i<n-1; i++){
            sum.push_back(a[i]-a[i-1]);
            if(a[i]-a[i-1]<=n) visited[a[i]-a[i-1]]=true;
        }
        for(int i=1; i<=n; i++){
            if(!visited[i]) missing.push_back(i);
        }
        if(missing.size()!=2){
            cno
            return;
        }
        for(int i=0; i<sz(sum); i++){
            if(missing[0]+missing[1]==sum[i]){
                cyes
                return;
            }
        }
        cno
    }
}