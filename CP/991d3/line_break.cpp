#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n,m,ans=0;
            cin >>n>>m;
            string s="";
            for(int i=0;i<n;i++)
            {
                  string t;
                  cin >>t;
                  s+=t;
                  if(s.size()<=m)
                  {
                        ans=i+1; 
                  }
            }
            cout<<ans<<endl;
      }
      return 0;
}