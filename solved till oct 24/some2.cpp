#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,cnt=0;
    cin>>n>>k;
    vector<int>v ;
    unordered_map<int,int>mp;
    for(int i=0,j;i<n;i++)
    {
        cin>>j;
        v.push_back(j%k);
    }
    for(int i=0,j=0;i<n;i++)
    {
        cin>>j;
        mp[j%k]++;
    }
    // for(auto i:v)
    // {
    //     cout<<i<<endl;
    // }
    for(auto i:v)
    {
        int key=i;
        if(mp.count(key) > 0)
        {
            cnt+=mp[key];
        }
    }
    // for(auto i:mp)
    // {
    //     cout<<i.first<< " "<<i.second<<endl;
    // }
    cout<<cnt<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        solve();
    }
    return 0;
}

