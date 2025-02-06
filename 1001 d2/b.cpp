#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int n;
      cin>>n;
      bool ans=true;
      for(int i=0,j;i<n;i++)
      {
            cin >>j;
            if(j<=2*i||j<=2*(n-i-1))
            {
                  ans = false;
            }
      }
      cout<<(ans?"YES":"NO")<<endl;
}
int main()
{
      int tt = 1; 
      cin >> tt;
      while(tt--)
      {
            solve();
      }
      return 0;
}