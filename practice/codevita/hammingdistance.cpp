#include<bits/stdc++.h>
using namespace std;
void solve()
{
      string s;
      cin>>s;
      long long int  a,b;
      cin>>a>>b;
      if (s.find_first_not_of("01") != string::npos) cout <<"INVALID"<<endl;
      else if(  s.find("0")==string::npos or s.find("1")==string::npos)cout<<0<<endl;
      else  cout<<min(a,b)<<endl;
}
int main()
{
      long long int tt=1;
      cin>>tt;
      while(tt--)solve();
      return 0;
}