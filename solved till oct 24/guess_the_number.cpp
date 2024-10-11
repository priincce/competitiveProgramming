#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0,j;i<n;i++)
    {
       cin>>j;
       v.push_back(j);
    }
    int mini=max(v[0],v[1]);
    for(int i=0;i<n;i++)
    {
        mini=min(mini,max(v[i],v[i+1]));
    }
    cout<<mini-1<<"\n";
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