#include<bits/stdc++.h>
using namespace std;

int fib_dp_optimise(int n)
{
      int a = 0, b = 1, c;
      if(n==0)return a;
      for(int i=2;i<=n;i++)
      {
            c = a + b;
            a = b;
            b = c;
      }
      return b;
}

int main()
{
      int n;
      cin >> n;
      cout<<fib(n);
      return 0;
}