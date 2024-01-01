/*
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
#define ump unordered_map<int, int> mp;
#define mp map<int, int> mp;
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
    int n;
    cin >> n;
    vector<int> a(n);
    int cnt = 0, neg = 0;
    int mx = INT_MIN;
    int mn = INT_MAX;
    int idx = -1;
    int idx2 = -1;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i]>=mx){
            mx=a[i];
            idx=i;
        }
        if(a[i]<mn){
            mn=a[i];
            idx2=i;
        }
    }
    vector<pair<int, int>> ans;
    vector<int> b = a;
    if (mx > 0)
    {
        for (ll i = 1;i < n;i++)
        {
            while (a[i] < a[i - 1])
            {
                a[i] += mx;
                ans.push_back({ i,idx});
                if (a[i] > mx)
                {
                    mx = a[i];
                    idx = i;
                }
            }
        }
    }
    if (ans.size() > 50 || mx <= 0)
    {
        ans.clear();
        for (ll i = n - 2;i >= 0;i--)
        {
            while (b[i] > b[i + 1])
            {
                b[i] += mn;
                ans.push_back({ i,idx2 });
                if (b[i] < mn)
                {
                    mn = b[i];
                    idx2 = i;
                }
            }
        }
    }
    cout << ans.size() << ndl;

    for (auto it : ans)
        cout << it.first + 1 << " " << it.second + 1 << '\n';
}
