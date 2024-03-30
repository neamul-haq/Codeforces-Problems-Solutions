/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 23-03-2024  20:40:28
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
int n;
vector<string>s;
int d1[N][N];
int d2[N][N];
int cur[N][N];
int main()
{
#ifndef LOKAL
    fast()
#endif
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    cin>>n;
    s.clear();
    s.resize(n);
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            d1[i][j] = 0;
            d2[i][j] = 0;
            cur[i][j] = 0;
        }
    }
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        // currently in row i
        // taking the prefix sum
        for(int j=0; j<n; j++)
        {
            cur[i][j] = d1[i][j] + d2[i][j] + (j-1>=0?cur[i][j-1]:0);
        }
        for(int j=0; j<n; j++)
        {
            char eta = s[i][j];
            if(cur[i][j]%2) // this character is flipped
            {
                eta = ((eta-'0')^1) + '0';
            }
            if(eta == '1')
            {
                ans++;
                d1[i][j]++; //   +1 -1
                            // 1    -1
                if(j+1<n)
                    d2[i][j+1]--;
            }
        }

        for(int j=0; j<n; j++)
        {
            if(i+1 >= n)
                break;
                                        //          i,j
                                        // i+1, j-1
                                        // down i+1 j
            if(j-1>=0)
                d1[i+1][j-1] += d1[i][j];
            else
                d1[i+1][j] += d1[i][j];

            if(j+1<n)                   // i,j
                                        //     i+1 j+1
                d2[i+1][j+1] += d2[i][j];
        }
    }
    cout<<ans<<"\n";
    
}