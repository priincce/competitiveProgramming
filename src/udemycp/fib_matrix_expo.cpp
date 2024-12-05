#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int MOD = 1e9 + 7, sz = 2;

struct Mat
{
      int m[sz][sz];
      Mat()
      {
            memset(m, 0, sizeof (m));
      }
      void identity()
      {
            for(int i=0;i<sz;i++)
            {
                  m[i][i] = 1;
            }
      }
      Mat operator * (Mat a)
      {
            Mat res;
            for(int i=0;i<sz;i++)
            {
                  for(int j=0;j<sz;j++)
                  {
                        for(int k=0;k<sz;k++)
                        {
                              res.m[i][j] += ( m[i][k] * a.m[k][j]);
                              res.m[i][j] %= MOD;
                        }
                  }
                  
            }
            return res;
      }

};
int fib(int n)
{
      Mat res;
      res.identity();
      Mat T;
      T.m[0][0]=T.m[0][1]=T.m[1][0]=1;
      if(n<=2)return 1;
      n-=2;
      while(n)
      {
            if(n&1)res = res * T;
            T = T * T;
            n>>=1;
      }
      return res.m[0][0];
      
}

int32_t main()
{
      int n;
      cin >> n;
      cout<< fib(n) << endl;
      return 0;
}
