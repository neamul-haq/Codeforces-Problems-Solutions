#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
///@b decltype and const
///@b debug
struct _
{
    ios_base::Init i;
    _()
    {
        cin.sync_with_stdio(0);
        cin.tie(0);
        cout << fixed << setprecision(10);
    }
} ___;


const int MAX = 2e5 + 5;
const int bit = 32;
int pre_count[bit][MAX];

void pre(int arr[], int n)
{

    for (int i = 0; i < bit; i++)
    {

        pre_count[i][0] = ((arr[0] >> i) & 1);
        for (int j = 1; j < n; j++)
        {
            pre_count[i][j] = ((arr[j] >> i) & 1);
            pre_count[i][j] += pre_count[i][j - 1];
        }
    }
}

int range(int l, int r)
{

    int ans = 0;
    for (int i = 0; i < bit; i++)
    {
        int x;
        if (l == 0)
            x = pre_count[i][r];
        else
            x = pre_count[i][r] - pre_count[i][l - 1];

        if (x == r - l + 1)
            ans = (ans | (1 << i));
    }

    return ans;
}
inline void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pre(a, n);
    int q;
    cin >> q;
    while (q--)
    {
        int l, k;
        cin >> l >> k;
        l--;
        int low = l, high = n - 1, ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (range(l, mid) >= k)
            {
                ans = mid + 1;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << " ";
    }
    cout << endl;
}
auto main() -> int32_t
{
    IOS;
    int t, cs = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}