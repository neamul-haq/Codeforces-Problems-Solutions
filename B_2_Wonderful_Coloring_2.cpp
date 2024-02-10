/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 05-02-2024  23:21:11
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
    ll i, n, m, k, j, sum = 0, x = 0;
    cin >> n >> k;
    vector<int> ans(n);
    vector<vector<int>>v(n);
    map<int,int>cnt;
    set<int>s;
    int start=1;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        v[val].push_back(i);
        s.insert(val);
    }
    for(auto it:s){
        j=start;

        for(int i=0; i<v[it].size(); i++){
            if(j>k){
                ans[v[it][i]]=0;
                continue;
            }
            ans[v[it][i]]=j;
            cnt[j]++;
            if(cnt[j]==(n/k)) start++;
            j++;
        }
    }
    for(auto u:ans){
        cout << u << " ";
    }
    cout << nl;
}