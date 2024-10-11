#include<bits/stdc++.h>
using lli=long long int;
using namespace std;
void solve()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   if((b>a&&b<c)||(a>b&&a<d))
   {
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    // cout<<12345678%3<<endl;
        return 0;
}