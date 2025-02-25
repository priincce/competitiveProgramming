#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
      int n,sum=0;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++)cin>>arr[i];

      for(int i=0;i+1<n;i++)
      {
            if(arr[i]>arr[i+1])
            {
                  sum+=abs(arr[i]-arr[i+1]);
                  arr[i+1]=arr[i];
            }
      }
      cout<<sum<<endl;
      return 0;
}