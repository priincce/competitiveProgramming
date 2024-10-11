#include<iostream>
using lli=long long int;
using namespace std;
lli sum1(lli n)
{
    return (n*(n+1))/2;
}
void solve()
{
    lli a,b,c,ans;
    cin>>a>>b>>c;
    if(b>=c)
    {
        cout<<a*b<<endl;
    }
    else{
       lli d=c-b;
       if(d>a)
       {
        ans=sum1(d)-sum1(d-a);
       }
       else{
        ans=sum1(d);
       }
        ans+=a*b;
        cout<<ans<<endl;
    }
}
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}