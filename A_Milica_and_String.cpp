/*
AUTHOR: Neyamul_Haq
CREATED: 19-11-2023  20:39:00
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
#define f(strt, end) for (int i = strt; i <= end; i++)
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
    ll i, n, m, k, j, a = 0, b = 0, ans = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            b++;
    }
    if (b == k)
    {
        print return;
    }
    else if (b > k)
    {
        cout << 1 << ndl;
        ll aa=0,bb=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B') bb++;
            ll rem=b-bb;
            if(rem==k){
                cout << i+1 << " " << "A" << ndl;
                break;
            }
        }
    }
    else{
        cout << 1 << ndl;
        ll aa=0,bb=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B') bb++;
            ll rem=b-bb;
            if(rem<0) rem=0;
            ll tot=rem+i+1;
            if(tot==k){
                cout << i+1 << " " << "B" << ndl;
                break;
            }
        }
    }
}