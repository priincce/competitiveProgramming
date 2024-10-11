#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,cnt=0;
    cin>>n>>k;
    vector<int>v(n),v2(n) ;
    // unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
        // cin>>j;
        // mp[j]++;
    }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        if((v[i]+v2[j])%k==0)
        {
            cnt++;
        }
    }
   }
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

