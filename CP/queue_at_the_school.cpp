#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,t;
      cin >>n>>t;
      string s;
      cin >> s;
      for(int i=0;i<t;i++)
      {
            for(int i=0;i+1<n;i++)
            {
                  if(s[i]=='B' and s[i+1]=='G')
                  {
                        swap(s[i],s[i+1]);
                        i++;
                  }
            }
      }
      cout<<s<<endl;
}