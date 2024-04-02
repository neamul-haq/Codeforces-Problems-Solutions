/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 31-03-2024  13:15:56
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

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            int satisfy = 2;
            for(int j = 0; j < i; j++)
            {
                for(int k = j+i; k < n; k+=i)
                {
                    if(s[k] != s[j])
                    {
                        satisfy--;
                    }
                }
            }
            if(satisfy > 0)
            {
                cout << i << endl;
                return;
            }
            satisfy = 2;
            for(int j = n-i; j < n; j++)
            {
                for(int k = j-i; k >= 0; k-=i)
                {
                    if(s[k] != s[j])
                    {
                        satisfy--;
                    }
                }
            }
            if(satisfy > 0)
            {
                cout << i << endl;
                return;
            }
        }
    }
}
