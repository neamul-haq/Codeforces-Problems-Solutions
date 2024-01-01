#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main(){
   Faster;
   int t;                     cin>>t;
   while(t--){
      string s;               cin>>s;
      int n=s.size();


      auto Call=[&](string s)->ll{
         ll res=0;
         bool a=false,b=false,c=false,d=false,e=false;
         for(int i=n-1;i>-1;i--){
            if(s[i]=='A'){
               if(b or c or d or e){
                  res-=1LL;
               }
               else{
                  res+=1LL;
               }
               a=true;
            }
            else if(s[i]=='B'){
               if(c or d or e){
                  res-=10LL;
               }
               else{
                  res+=10LL;
               }
               b=true;
            }
            else if(s[i]=='C'){
               if(d or e){
                  res-=100LL;
               }
               else{
                  res+=100LL;
               }
               c=true;
            }
            else if(s[i]=='D'){
               if(e){
                  res-=1000LL;
               }
               else{
                  res+=1000LL;
               }
               d=true;
            }
            else if(s[i]=='E'){
               res+=10000LL;
               e=true;
            }
         }

         return res;
      };


      ll ans=Call(s);

      for(char checker='A';checker<='E';checker++){
         int firstOcc=-1;
         for(int i=0;i<n;i++){
            if(s[i]==checker){
               firstOcc=i;
               break;
            }
         }
         if(firstOcc==-1)continue;

         for(char toIncrease=checker+1;toIncrease<='E';toIncrease++){
            s[firstOcc]=toIncrease;
            ans=max(ans,Call(s));
         }
         s[firstOcc]=checker;
      }

      for(char checker='A';checker<='E';checker++){
         int lastOcc=-1;
         for(int i=n-1;i>-1;i--){
            if(s[i]==checker){
               lastOcc=i;
               break;
            }
         }
         if(lastOcc==-1)continue;

         for(char toDecrease=checker-1;toDecrease>='A';toDecrease--){
            s[lastOcc]=toDecrease;
            ans=max(ans,Call(s));
         }
         s[lastOcc]=checker;
      }

      cout<<ans<<endl;
   }
   return 0;
}
