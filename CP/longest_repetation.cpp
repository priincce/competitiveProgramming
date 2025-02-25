#include<bits/stdc++.h>

using namespace std;
int main()
{
      string s;
      cin>>s;
      int i=0,j=0,ans=0;
      while(j<s.size())
      {
            if(s[i]==s[j])
            {
                  ans=max(ans,j-i+1);
            }else{
                  i=j;
            }
            j+=1;
      }
      cout<<ans<<endl;
}