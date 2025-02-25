#include<bits/stdc++.h>
using namespace std;
class Solution {
 
public:
    vector<int> Match_KMP(string text, string pattern) {
      int n = pattern.size(), len=0;
      vector<int>ans, lps(n,0);
      for(int i=1;i<n;i++)
      {
            if(pattern[i]==pattern[len])
            {
            lps[i]=++len;
            }
            else{
            if(len>0)
            {
                  len= lps[len-1];
                  i--;
            }
            else {
                  lps[i]=0;
            }
            }
      }
      int i=0, j=0;
      while(i<text.size())
      {
            if(text[i]==pattern[j])
            {
                  i++;j++;
            }
            if(j==pattern.size())
            {
                  ans.push_back(i-j);
                  j=lps[j-1];
            }
            else if(i<text.size() && text[i]!=pattern[j])
            {
                  if(j!=0)
                  {
                        j=lps[j-1];
                  }
                  else{ i++;}
            }
      }
      return ans;
    }
};
int main(){
      ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
      Solution T;
      string text,pattern;
    
      cin >> text >> pattern;
      vector<int>ans= T.Match_KMP(text,pattern);
      for(auto i: ans)
      {
            cout<<i<<" \n"[i==ans.back()];
      }
      return 0;
}