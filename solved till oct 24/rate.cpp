#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,ans=INT_MIN,ans2=INT_MIN;
    cin>>n;
    vector<int>v(n),w(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<n;i++)
    {
        ans2=max(min(w[i],v[i]),ans2);
       
    }
    
    cout<<ans2<<endl;
    
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