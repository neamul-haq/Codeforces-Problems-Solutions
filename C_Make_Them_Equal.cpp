/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 08-01-2024  19:22:47
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
#define fast()                        \
  {                                   \
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
  ll i, n, m, k, j, x = 0, ans = 0;
  cin >> n;
  char c;
  cin >> c;
  string s;
  cin >> s;
  s = '#' + s;
  bool allequal = true;
  for (int i = 1; i <= n; i++)
  {
    if (s[i] != c)
      allequal = false;
  }
  if (allequal)
  {
    cout << 0 << nl;
    return;
  }
  bool ok = true;
  for (int i = 2; i <= n; i++)
  {
    for (int j = i; j <= n; j += i)
    {
      if (s[j] != c)
      {
        ok = false;
        break;
      }
    }
    if (ok)
    {
      cout << 1 << nl;
      cout << i << nl;
      return;
    }
    ok=true;
  }

  cout << 2 << nl;
  cout << n << " ";
  cout << n-1 << nl;
}