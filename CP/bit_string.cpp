#include <bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
int powr(int n)
{
      if(n==1)return 2;
      int ans=powr(n/2);
      if(n&1)
      {
            return (1LL*ans*ans*2)%mod;
      }
      return (1LL*ans*ans)%mod;
}
int main() {
    int n;
    cin>>n;
    cout<<powr(n)<<endl;
    return 0;
}
