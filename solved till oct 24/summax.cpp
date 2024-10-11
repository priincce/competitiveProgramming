#include<bits/stdc++.h>
using lli=long long int;
using namespace std;
void solve()
{
   lli n,a,b;
   cin>>n>>a>>b;
   vector<lli>v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }
//    sort(v.rbegin(),v.rend());
   lli i=0,sum=0,cnt=0;
   while(i<n)
   {
    if(v[i]<=b)
    {
    sum+=v[i];
    if(sum>=a)
    {
        cnt++;
        sum=0;
    }
    if(sum>b)
    {
        sum=0;
    }
    }
   i++;
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