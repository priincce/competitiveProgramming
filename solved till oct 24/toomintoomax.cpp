#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int l=v.size()-1;
    int ans=abs(v[0]-v[l])+abs(v[0]-v[l-1])+abs(v[1]-v[l])+abs(v[1]-v[l-1]);
    cout<<ans<<endl;
    }
    return 0;
}