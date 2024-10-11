#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,ans=0;
    vector<int>v;
    cin>>n;
    for(int i=0,j;i<n;i++)
    {
        cin>>j;
        v.push_back(j);
    }
    for(int i=0;i<n-1;i++)
    {
        ans=max(ans,v[i]);
    }
    cout<<ans+v[n-1]<<endl;
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