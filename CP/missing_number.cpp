#include<bits/stdc++.h>

using namespace std;
int main()
{
      ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
      int n;
      cin>>n;
      vector<int>arr(n+1,0);
      for(int i=0,j;i<n-1;i++)
      {
            cin>>j;
            arr[j]++;
      }
      for(int i=1;i<=n;i++)
      {
            if(arr[i]==0){cout<<i<<endl;break;}
      }
      return 0;
}