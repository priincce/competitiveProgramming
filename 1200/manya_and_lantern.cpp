#include<bits/stdc++.h>
using namespace std;
void solve()
{
      long long int n,l;
      
      cin>>n>>l;
      vector<long long int>nums(n);
      for(int i =0; i<n;++i)cin>>nums[i];
      sort(nums.begin(),nums.end());
      long long int ans=INT_MIN;
      for(int i=0;i<n-1;i++)
      {
            ans=max(ans,abs(nums[i+1]-nums[i]));
      }
      
      double val=(double)ans/2.0;
       cout<<fixed<<setprecision(10)<<max(val,max((double)abs(l-nums[n-1]),(double)abs(0-nums[0])))<<endl;
}
int main()
{
      ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
      int tt = 1;
      // cin >> tt; //for multiple testcases
      while(tt--)
      {
            solve();
      }
      return 0;
}