#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,mini=INT_MAX,maxi=INT_MIN,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
        mini=min(mini,a);
        maxi=max(maxi,a);
    }
    sum+=0+(maxi-mini)*(n-1);
    cout <<sum<<endl;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        solve();
    }
    return 0;
}