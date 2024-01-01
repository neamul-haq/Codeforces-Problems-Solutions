
#include<bits/stdc++.h>

using namespace std;

int main()
{
   long long int t,i,j,n;
    cin>>t;
    while(t--)

    {
        cin>>n;
      long long  int m = (n*(n-1))/2;
        vector<int>v(m);
        for(i=0;i<m;i++)
        {
            cin>>v[i];
        }

        sort (v.begin(),v.end());
        long long int k =0;
        for(i=1;i<n;i++)
        {
            cout<<v[k]<<' ';
            k+=n-i;
           // cout << k << endl;
        }

        cout<<v[m-1]<<endl;

        
    }
}























