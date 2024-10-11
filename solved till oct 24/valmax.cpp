#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,k;
    unordered_map<int,int>m;
    vector<pair<int,int>>pv;
    cin>>n>>x>>k;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        m[j]++;
    }
    for(auto i:m){
        pv.push_back({i.first,i.second});
    }
    for(auto i:pv)
    {
        cout<<i.first<<i.second<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}