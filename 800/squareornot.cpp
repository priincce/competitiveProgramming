#include<bits/stdc++.h>
using namespace std;



void solve()
{
 int n,cnt=0;
 cin>>n;
 string s;
 cin>>s;
 while ( cnt<n and s[cnt]=='1')
 {
  cnt++;
 }
 if(cnt==n)
 {
  if(n==4)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 }
 else{
  if((cnt-1)*(cnt-1)==n)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 }
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