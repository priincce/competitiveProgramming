#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
      int n;
      cin>>n;
      if(n==2 or n==3){
            cout<<"NO SOLUTION"<<endl;
            return 0;
      }
      if(n==4)
      {
            vector<int>ans={2 ,4 ,1 ,3 };
            for(int i=0;i<n;i++)
            {
                  cout<<ans[i]<<" \n"[i==n-1];
            }
            return 0;
      }
      vector<int>arr(n);
      int curr=n;
      for(int i=0;i<n;i+=2)
      {
            arr[i]=--curr;
      }
      for(int i=1;i<n;i+=2)
      {
            arr[i]=--curr;
      }
      for(int i=0;i<n;i++)
      {
            if(arr[i]==0){arr[i]=n;break;}
      }
      for(auto i:arr)cout<<i<<" ";
      cout<<endl;
      return 0;
}