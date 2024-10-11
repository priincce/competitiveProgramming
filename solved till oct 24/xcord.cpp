#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum1=abs(b-a)+abs(c-a);
    int sum2=abs(a-b)+abs(c-b);
    int sum3=abs(c-a)+abs(c-b);
    cout<<min(sum1,min(sum2,sum3))<<endl;
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