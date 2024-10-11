#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=0,j;i<n;i++)
    {
        cin>>j;
        mp[j]++;
    }
    for(int i=0;i<n;i++)
    {
        if(!(mp.find(i+1)!=mp.end()))
        {
            mp[i+1]=0;
        }
    }
    
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(!mp[i]&&cnt>=0)
        {
            mp[i]=1;
            cnt--;
        }
        else{
            cnt+=mp[i]-1;
        }
    }
    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    bool flag=true;
    for(int i=1;i<=n;i++)
    {
        if(!(mp.count(i)>0))
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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

