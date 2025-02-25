#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int x,y;
      cin >> x>>y;
      if (x < 1 || x > 9 * 1000) { 
            cout<<"NO\n";
        }
        if (y == x + 1 || y < x) {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
}
int main()
{
      int t=1;
      cin >>t;
      while(t--)
      {
            solve();
      }
      return 0;
}