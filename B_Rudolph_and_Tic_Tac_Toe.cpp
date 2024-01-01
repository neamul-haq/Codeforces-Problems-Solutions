/*
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ndl '\n';
#define cyes cout << "YES" << '\n';
#define cno cout << "NO" << '\n';
#define print cout << ans << '\n';
#define ump unordered_map<int,int>mp;
#define mp map<int,int>mp;
int const mod = 1e9+7;
const ll inf = 1e18;
const ll N = 1e3 ;
#define   fast() {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define all(x) (x).begin(), (x).end()
void solve();

int main()
{
    fast()
    ll t=1; cin >> t;
    while(t--) solve();
}

void solve(){
    char m[3][3];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
        {
            cin >> m[i][j];
        }
    }
    if(m[0][0]==m[0][1] and m[0][1]==m[0][2] and m[0][0]!='.'){
        cout << m[0][2] << ndl;
    }
    else if(m[1][0]==m[1][1] and m[1][1]==m[1][2] and m[1][0]!='.'){
        cout << m[1][2] << ndl;
    }
    else if(m[2][0]==m[2][1] and m[2][1]==m[2][2] and m[2][0]!='.'){
        cout << m[2][2] << ndl;
    }
    else if(m[0][1]==m[1][1] and m[1][1]==m[2][1] and m[0][1]!='.'){
        cout << m[0][1] << ndl;
    }
    else if(m[0][2]==m[1][2] and m[1][2]==m[2][2] and m[0][2]!='.'){
        cout << m[0][2] << ndl;
    }
    else if(m[0][0]==m[1][0] and m[1][0]==m[2][0] and m[0][0]!='.'){
        cout << m[0][0] << ndl;
    }
    else if(m[0][0]==m[1][1] and  m[1][1]==m[2][2] and m[0][0]!='.'){
        cout << m[1][1] << ndl;
    }
    else if(m[0][2]==m[1][1] and m[1][1]==m[2][0] and m[0][2]!='.'){
        cout << m[0][2] << ndl;
    }
    else{
        cout << "DRAW" << ndl;
    }

}