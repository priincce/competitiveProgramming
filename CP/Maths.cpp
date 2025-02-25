#include<bits/stdc++.h>
using namespace std;
const int MOD= 1e9+7;
#define int long long int


class Maths
{
      public:
      int sum_of_natural_numbers(int n)
      {
            return n*(n+1)/2;
      }
      int nmuls(int a,int b)
      {
            int res=0;
            while(b)
            {
                  if(b&1)
                  {
                        res+=a;
                        res%=MOD;
                  }
                  a*=2;
                  a%=MOD;
                  b/=2;
            }
            return res;
      }
      int div(int a,int b)
      {
            int res=1;
            int x=a;
            while(b)
            {
                  if(b&1)
                  {
                        res=nmuls(res,x);
                  }
                  x=nmuls(x,x);
                  b/=2;
            }
            return res;
      }
      // int powr(int a,int b)
      std::tuple<int, int, int> extendedEuclid(int a, int b) {
            if (b == 0) {
                  return {1, 0, a};
            }

            // Recursively call extendedEuclid with (b, a % b)
            auto [x1, y1, gcd] = extendedEuclid(b, a % b);

            // Update x and y based on the recursive result
            int x = y1;
            int y = x1 - (a / b) * y1;

            return {x, y, gcd};
      }
      int modInverse(int a, int m) {
            auto [x, y, gcd] = extendedEuclid(a, m);

            if (gcd != 1) {
                  throw std::invalid_argument("Modular inverse does not exist (a and m are not coprime).");
            }

            // Ensure the result is positive
            return (x % m + m) % m;
 }
};

void solve()
{
      Maths m;
      cout<<m.sum_of_natural_numbers(7)<<endl;
}

int32_t main()
{
      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int tt = 1;
      // cin >> tt;
      while(tt--)
      {
            solve();
      }
      return 0;
}