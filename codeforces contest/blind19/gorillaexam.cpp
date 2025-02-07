#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int n,k;
      cin >>n>>k;
      vector<int>s(n);
      for(int i=0;i<n;i++){
            cin>>s[i];
      }
      sort(begin(s), end(s));
      vector<int>ans;
      ans.push_back(1);

      for(int i=1;i<n;i++)
      {
            if(s[i]==s[i-1])
            {
                  ans.back()++;
            }
            else{
                  ans.emplace_back(1);
            }
      }
      sort(ans.begin(),ans.end());
      for(int i=0;i<ans.size()-1;i++)
      {
            if(ans[i]>k)
            {
                  cout<<ans.size()-i<<endl;
                  return;
            }
            k-=ans[i];
      }cout<<1<<"\n";
}
int main()
{
      int t;
      cin >>t;
      while(t--)
      {
            solve();
      }
      return 0;
}