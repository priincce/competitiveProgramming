#include<bits/stdc++.h>
// using lli=long long int;
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,ans=0,val=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
      if(__gcd(n,i)+i>ans)
      {
        ans=__gcd(n,i)+i;
        val=i;
      }
     
    }
    cout<<val<<endl;
    }
    return 0;
}
