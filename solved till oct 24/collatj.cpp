#include<bits/stdc++.h>
using lli=long long int;
using namespace std;
void solve()
{
   lli n,a,b,cnt=0;
   cin>>n>>a>>b;
   
    if((n+b)/a!=(n/a))
    {   n+=abs((n%a)-a);
        while(n%a==0)
        {
            n/=a;
        }
    }
    else{
        n+=b;
    }
cout<<n<<endl;
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