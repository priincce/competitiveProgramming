#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int n,m,a,b;
      cin>>n>>m>>a>>b;
      long long int ans=0;
      if(b*1.0/m*1.0<=a*1.0)
      {
            ans=b*(n/m)+min(a*(n%m),b);
      }
      else{
            ans=a*n;
      }
      cout<<ans<<endl;

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