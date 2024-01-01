#include <bits/stdc++.h>
using namespace std;
long long int dp[200000],l,r;
long long p_bonacci(int N,int P){
    
    if(N < P){
        return 1;
    }
    
    long long int ans = 1;
    for (int i=1;i<=P;i++ ){
        if(dp[N-i]!=-1) ans+=dp[N-i];
        else{
            ans+=p_bonacci(N-i,P);
    
        }
       
    }
    //cout<<N<<" "<<P<<endl;
    //cout<<ans<<endl;
    return dp[N]=ans;
}

int main(){

    long long int i,j,m,x,y,t,sr,gl,n,p,k;
    cin>>t;
    for(i=1;i<=t;i++){
        printf("Case %lld : ",i);
        cin>>n>>p>>k;
        memset(dp,-1,sizeof(dp));
        if(n-p>=80){
            cout<<"Invalid"<<endl;
            continue;
        }
        x=p_bonacci(n,p);
        x--;
        //cout<<x<<endl;
        dp[n]=x;
        if(x<k) cout<<"Invalid"<<endl;
        else{
            cout<<endl;
        }
    }

    
}