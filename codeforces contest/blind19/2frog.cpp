#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int a,b,c;
      cin >>a>>b>>c;
      cout<<(((b^c)&1)?"NO\n":"YES\n");
      
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