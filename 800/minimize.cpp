#include<bits/stdc++.h>
using namespace std;



void solve()
{
 int a,b;
 cin >>a>>b;
 int avg=(a+b)/2;
 cout <<( avg-a)+(b-avg)<<endl;
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