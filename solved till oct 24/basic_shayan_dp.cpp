#include<bits/stdc++.h>
using lli = long long int;

using namespace std;
const lli MOD=1e9 + 7;
lli fib(lli dp[], int n){
  if(dp[n]!=-1)return dp[n];
 dp[0]=0;
 dp[1]=1;
 for(int i=2;i<=n;i++)
 {
    if(dp[i]==-1){
      dp[i]=(dp[i-1]+dp[i-2])%MOD;
    }
 }
 
 return dp[n];
}

int main()
{
  int n;
  cin>>n;
  lli  dp[100];
  memset(dp,-1,sizeof(dp));
  cout<<fib(dp,n)<<endl;
  return 0;
}