#include<bits/stdc++.h>
using namespace std;
using lli=long long int;
void solve()
{
    lli n;
    cin>>n;
    vector<lli>v;
    for(lli i=0,j;i<n;i++)
    {
        cin>>j;
      v.push_back(j);  
    }
    lli maxi=INT_MIN,sum=0,cnt=0;
    for(lli i=0;i<n;i++)
    {
        sum+=v[i];
        maxi=max(maxi,v[i]);
        if((sum-maxi)==maxi)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
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