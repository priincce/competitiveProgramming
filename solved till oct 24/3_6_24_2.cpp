#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,f,k;
   cin>>n>>f>>k;
   vector<int>v;
   for(int i=0,j;i<n;i++)
   {
      cin>>j;
      v.push_back(j);
   }
    int fav=v[f-1];
   sort(v.begin(),v.end(),greater<int>());
   int f1=0,f2=0;
   for(int i=0;i<k;i++)
   {
    if(v[i]==fav)
    {
        f1=1;
    }
   }
   for(int i=k;i<n;i++)
   {
    if(v[i]==fav)
    {
        f2=1;
    }
   }

   
   if(f1&&f2)
   {
    cout<<"MAYBE"<<endl;
   }
   else if(f1)
   {
    cout<<"YES"<<endl;
   }
   else{
     cout<<"NO"<<endl;
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