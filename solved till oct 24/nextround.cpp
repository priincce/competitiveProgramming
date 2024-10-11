#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans=0;
    unordered_map<int,int>m;
    for(int i=0,j;i<n;i++)
    {
        cin>>j;
       if(j>0)
       {
        m[j]++;
       }
    }
     vector<pair<int, int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
        return a.first > b.first;
    });
     for(auto i:vec)
    {
       ans+=i.second;
       if(ans>=k)
       {
        break;
       }
    }
    cout<<ans<<endl;
    return 0;
}