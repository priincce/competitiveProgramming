#include<bits/stdc++.h>
using namespace std;
int singlenum1(vector<int>&nums)
{
     int ans=0;
     for(auto num : nums)
     {
        ans^=num;
     }
     return ans;
}
void bar()
{
     int n;
     cin >> n;
     vector<int>nums(n,0);
     for(int i=0; i<n;i++)
     {
        cin >> nums[i];
     }
     cout << singlenum1(nums)<<endl;
}
int main(int argc, char const *argv[])
{
      int tt;
      cin >> tt;
      while (tt--)
      {
            bar();
      }
      return 0;
}
