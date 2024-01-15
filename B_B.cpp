/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 13-01-2024  11:21:49
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
    ll i, n, m, k, j, sum = 0, x = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    ll od = 0, ev = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            ev++;
        else
            od++;
    }
    int de = 0, dum = 0;
    if (s == "Dee")
    {
        de = (ev + 1) / 2;
        dum = ev / 2;
        dum*=2;
    }
    else{
        dum = (ev + 1) / 2;
        dum*=2;
        de = ev / 2;
    }
    dum += (od);
    //de += (od);
    // if(s=="Dee") de--;
    // else dum--;
    if(de==dum){
        if(s=="Dee"){
            cout << "Dum" << nl;
        }
        else cout << "Dee" << nl;
    }
    else{
        if(dum>de){
            cout << "Dum" << nl;
        }
        else cout << "Dee" << nl;
    }
}