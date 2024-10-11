#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,ans=0;
    cin>>n>>m;
   vector<int>v(7,0);
   string s;
   cin>>s;
    for(auto i:s)
    {  
        v[int(i-'A')]++;
    }
    for(auto i:v)
    {
        if(i<m)
        {
            ans+=(m-i);
        }
    }
    cout<<ans<<endl;
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