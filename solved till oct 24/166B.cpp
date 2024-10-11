#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v1,v2;
    for(int i=0,j;i<n;i++)
    {
        cin>>j;
        v1.push_back(j);
    }
    for(int i=0,j;i<n+1;i++)
    {
        cin>>j;
        v2.push_back(j);
    }
    int val=INT_MAX,ind=-1;
    for(int i=0;i<n;i++)
    {
        if(val>abs(v1[i]-v2[n]))
        {
            val=abs(v1[i]-v2[n]);
            ind=i;
        }
    }
    val=v1[ind];
    v1.push_back(val);
    int ans=0;
    for(int i=0;i<n+1;i++)
    {
        ans+=abs(v1[i]-v2[i]);
    }
    cout<<ans+1<<endl; 
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
