#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
   Faster;
   
   int n;                  cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
      cin>>a[i];
   }

   int ans=0;
   for(int i=0;i<n;i++){
      if(i>0 and a[i-1]!=0){
         a[i-1]--;
      }
      else if(i+1<n and a[i+1]!=0 and a[i]==0){
         a[i+1]--;
      }
      else{
         ans++;
      }
   }

   cout<<ans<<endl;

   return 0;
}
