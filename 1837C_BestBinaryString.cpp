#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t=1;
    cin >> t;
    while(t--) solve();
}

void solve()
{
    string s;
    cin>>s;
    int n=s.size();

    if(count(s.begin(),s.end(),'?')==0)
    {
        cout<<s<<endl;
        return;
    }

    char last='?';
    queue<int> later;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='?')
        {
            later.push(i);
            continue;
        }
        last=s[i];
        while(!later.empty())
        {
            s[later.front()]=s[i];
            later.pop();
        }
    }


    char c='0';
    if(last=='1')c='1';
    while(!later.empty())
    {
        s[later.front()]=c;
        later.pop();
    }

    cout<<s<<endl;
}
