#include<bits/stdc++.h>
using namespace std;
void print_lcs(string &s, string &t)
{
      int m = s.size();
      int n = t.size();
      vector<vector<int>>dp(m+1, vector<int>(n+1, 0));
      for(int i=1; i<=m;i++)
      {
            for(int j=1; j<=n;j++)
            {
                  if(s[i-1]==t[j-1])
                  {
                        dp[i][j]=1+dp[i-1][j-1];
                  }
                  else{
                        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                  }
            }
      }
      int i =m, j = n;
      string lcs ="";
      while(i>0 and j>0)
      {
            if(s[i-1]==t[j-1])
            {
                  lcs = s[i-1]+lcs;
                  i--;
                  j--;
            }
            else if (dp[i-1][j]>dp[i][j-1])
            {
                  i--;
            }
            else{
                  j--;
            }
      }
      cout<<lcs<<endl;
}
int main()
{
      return 0;
}