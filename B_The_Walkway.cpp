/*
AUTHOR: Neyamul_Haq
CREATED: 16-08-2023  11:19:48
*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define f(i, n) for (int i = 0; i < n; i++)
#define ump unordered_map<int, int> um;
#define mp map<int, int> m;
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
    fast()
        ll t = 1;
    cin >> t;
    while (t--)
        solve();
}

void solve()
{
    int n, m, d, ans = 1;
    cin >> n >> m >> d;
    //int cnt=0;
    unordered_map<int,int>um;
    vector<int> a(m);
    int idx;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    ans += (a[0] - 1 - 1) / d;
    if(a[0]==1) ans=0;
    for (int i = 0; i < m; i++)
    {
        if (i == m - 1)
        {
            ans += (n - a[i]) / d;
            ans++;
            break;
        }
        ans += (a[i + 1] - a[i] - 1) / d;
        ans++;
    }
    //cout << ans << ndl;
    int ans2, res = ans, ans3, output = ans;

        ans2 = (a[1] - 1 - 1) / d;
        
        ans3 = 1;
        if(a[0]==1) ans3=0;
        ans3 += (a[0] - 1 - 1) / d;
        ans3 += (a[1] - a[0] - 1) / d;
        res = ans - ans3 + ans2;
        um[res]++;
        output=min(output,res);
        
       //cout << res <<ndl;
    for (int i = 1; i < m - 1; i++)
    {
        ans2 = (a[i + 1] - a[i - 1] - 1) / d;
        ans3 = 1;
        ans3 += (a[i] - a[i - 1] - 1) / d;
        ans3 += (a[i + 1] - a[i] - 1) / d;
        res = ans - ans3 + ans2;
        um[res]++;
        output=min(output,res);
        //cout << res << ndl;
    }
    ans2 = (n - a[m - 2]) / d;
    //cout << ans2 << ndl;
    ans3 = 1;
    ans3 += (a[m - 1] - a[m - 2] - 1) / d;
    //cout << ans3 << ndl;
    ans3 += (n - a[m - 1]) / d;
    res = ans - ans3 + ans2;
    //cout << res << ndl;
    um[res]++;
    output=min(output,res);
    
    cout << output << " " << um[output] <<ndl;
}