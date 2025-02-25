#include<bits/stdc++.h>
using ulli=unsigned long long int;
using namespace std;
int main()
{
    ulli n,m,a;
    cin>>n>>m>>a;
    ulli ans=(n*m)/(a*a);
    if(ans>0)
    {
        if(n%a!=0)
    {
        ans=ans+n/a;
    }
    if(m%a!=0)
    {
        ans=ans+m/a;
    }
    }
    else{
        ans=1;
    }
    cout<<ans<<endl;
    return 0;
}
