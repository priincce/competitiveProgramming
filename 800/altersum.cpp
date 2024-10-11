#include<iostream>

using namespace std;
void solve()
{
  int n,sum=0;
  cin>>n;
 for(int i=0,j;i<n;i++)
 {
  cin>>j;
  if(i%2==0)sum+=j;
  else sum-=j;
 }
 cout<<sum<<endl;
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