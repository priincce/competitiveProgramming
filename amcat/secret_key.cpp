#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;


int power(int num,int exp)
{
 if (exp == 0) return 1;
    if (exp == 1) return num % MOD;
    int ans = power(num, exp / 2);
    ans = (1LL * ans * ans) % MOD; 
    if (exp % 2 == 1) {
        return (1LL * ans * num) % MOD;
    }
    return ans;
}

void solve()
{
     int k , p, s;
     cin >> k >> p >> s;
     int ans = power((power(k,p)%10),s) %MOD;
     cout<<ans<<endl;

}

int main()
{

      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int t=1;
      //uncomment if multiple test cases
      // cin >> t; 
      while(t--)
      {
            solve();
      }
      return 0;
}