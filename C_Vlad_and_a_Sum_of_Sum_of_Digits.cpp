/*
Problem_Link:
AUTHOR: Neyamul_Haq
CREATED: 23-02-2024  09:33:55
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
const int MAX = 200'007;
int res[MAX];
 
int S(int x) {
	int res = 0;
	while (x) {
		res += (x % 10);
		x /= 10;
	}
	return res;
}
int main()
{
#ifndef LOKAL
    fast()
#endif
    res[0] = 0;
	for (int i = 1; i < MAX; i++) {
		res[i] = res[i - 1] + S(i);
	}
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}

void solve(){
    int x;
	cin >> x;
	cout << res[x] << '\n';
    
}