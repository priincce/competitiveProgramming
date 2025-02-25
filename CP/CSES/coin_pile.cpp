#include<bits/stdc++.h>

using namespace std;
#define int  long long
int32_t main()
{
      ios_base:: sync_with_stdio(false);
      cin.tie(nullptr);
      cout.tie(nullptr);

      int t = 1;
      cin >> t;
      while(t--)
      {
            int n, m;
            cin >> n >> m;
            
            if((2*m-n)%3 or (2*n-m)%3 or (2*n-m)<0 or (2*m-n)<0)
            {
                  cout<<"NO\n";
            }
            else cout<<"YES\n";
      }
      return 0;
}