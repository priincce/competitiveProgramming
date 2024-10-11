#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int ans=n/2;
        ans*=b;
        ans+=(n%2)*a;
        if(n%2==0)
        {
            ans=min(ans,min((n/2)*b,n*a));
        }
        else{
            ans=min(ans,n*a);
        }
        cout<<ans<<endl;
    }
    return 0;
}