#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int n;cin >>n;
      double result = n * (0.5 + 1.0/6.0 + 0.5);
      int ans = ceil(result);
      cout<<ans<<endl;
}
int main()
{
      
            solve();
      
      return 0;
}