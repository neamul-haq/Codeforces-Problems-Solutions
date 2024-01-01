#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0;i < n;i++)
        cin >> v[i];

    long long int l = 0, r = 0, sum = 0, ans = INT_MAX;
    while (r < n)
    {
        sum += v[r];
        if (sum < k)
        {
            //ans = max(ans, r - l + 1);
            r++;
        }
        else if(sum==k) {
            ans = min(ans, r - l+1);
            r++;
            sum -= v[l];
            l++;
        }
        else if (sum > k)
        {

            while (sum > k && l <= r)
            {
                ans = min(ans, r - l+1);
                sum -= v[l];
                l++;
            }
            if(sum>=k) ans = min(ans, r - l+1);
            r++;
        }
    }
    if(ans==INT_MAX) ans = -1;
    cout << ans << '\n';
    return 0;
}
