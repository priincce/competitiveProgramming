#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int mod = 1e9+7;

int powr(int a, int b)
{
      int res = 1;
      while(b>0)
      {
            if(b&1)
            {
                  res = (res*a)%mod;
            }
            a = (a*a)%mod;
            b>>=1;
      }
      return res;
      
}

void solve()
{
      int num, b;
      cin >> num>> b;
      cout<<powr(num, b)<<endl;

}


int32_t main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int tt=1;
      cin>>tt;
      while(tt--)
      {
            solve();
      }
}