#include<bits/stdc++.h>
using namespace std;


#define int       long long int
#define F         first
#define S         second

void sieveOfEratosthenes(int n)
{
      bool prime[n+1];
      memset(prime, true, sizeof(prime));
      for(int p=2;p*p<=n;p++)
      {
            if(prime[p])
            {
                  for(int i=p*p;i<=n;i+=p)
                  {
                        prime[i] = false;
                  }
            }
      }
      for(int p=2;p<=n;p++)
      {
            if(prime[p])cout<<p<<" ";
      }
}
int32_t main()
{
      int n;
      cin >> n;
      sieveOfEratosthenes(n);
      return 0;
}