#include<bits/stdc++.h>
using namespace std;
double log_base_x(int x, int base) {
    return log2(x*1.0) / log2(base*1.0);
} 

void solve()
{
      int n,k,power=1,ans=0;
      cin>>n>>k;
      power=(int)log_base_x(n,k);
      while(n>0)
      {
            if(pow(k,power)>n){power--;}
           else{
            int val=n/pow(k,power);
             n-=val*pow(k,power);
            ans+=val;
           }
           power=(int)log_base_x(n,k);
      }
     cout<<ans<<endl;
}
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            solve();
      }
      return 0;
}