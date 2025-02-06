#include<bits/stdc++.h>
using namespace std;
const int N=1e6+7;
long long int v[N];
void solve()
{
     int n;
     cin>>n;
     for(int i=1; i<=n;i++)
     {
        cin>>v[i];
     } 
     long long int ans= accumulate(v+1,v+n+1,0LL);
     for(int i=n;i>=1;i--)
     {
        if (i!=n)ans = max(ans, abs(accumulate(v+1,v+i+1,0LL)));
        for(int j=1; j<=i-1;j++)
        {
            v[j]=v[j+1]-v[j];
        }
     }
     cout<<ans<<'\n';
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