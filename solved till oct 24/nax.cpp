#include<bits\stdc++.h>
using namespace std;
void solve()
{
    int k;
    cin>>k;
    vector<int>v;
    for(int i=0,j;i<k;i++)
    {
        cin>>j;
        v.push_back(j);
    }
    int mini=1e9+7;
    for(int i=0;i<k-1;i++)
    {
        int max1=v[i];
        for(int j=i+1;j<k;j++)
        {
           max1=max(max1,v[j]);
           mini=min(mini,max1);
        }
    }
    cout<<mini-1<<endl;
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