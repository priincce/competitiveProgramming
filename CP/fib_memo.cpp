#include<bits/stdc++.h>
using namespace std;

int fib_memorization(int n, int *dp)
{
      if(n<=1)return n;
      if(dp[n]!=-1)return dp[n];
      return dp[n] = fib_memorization(n-1, dp) + fib_memorization(n-2, dp);
}

int main()
{
      int n;
      cin >> n;
      cout<<fib(n);
      return 0;
}