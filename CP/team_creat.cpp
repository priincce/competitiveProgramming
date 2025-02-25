#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int n,val=0;cin>>n;
    unordered_map<int,int>m;
    for(int i=0,j=0;i<n;i++)
    {
      cin>>j;
      m[j]++;
      val =max(val,m[j]);
    }
    if(val==m.size())
    {cout<<m.size()-1<<endl;}
    else if(val>m.size())
    {
      cout<<m.size()<<endl;
    }
    else{
       cout<<val<<endl;
    }

}
int32_t main() {
  int tt=1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}