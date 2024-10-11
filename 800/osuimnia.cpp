#include<bits/stdc++.h>
using namespace std;



void solve()
{
   int n;
   cin >> n;

   vector<string>v;
   for( int i=0 ;i<n;i++)
   {
    string s;
    cin>>s;
    v.push_back(s);
   }

   for(int i=n-1;i>=0;i--){
    for(int j=0;j<=3;j++)
    {
      if(v[i][j]=='#')
      {
        cout<< j+1 <<" ";
      }
    }
   }
   cout<<endl;
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