#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int l, r, L, R;
    cin >> l >> r >> L >> R;
    int interval = min(r, R) - max(l, L) + 1;
    int val = interval - 1;
    if (interval <= 0) 
    {
          val = 1;
    } 
    else {
      if(l != L){
            val++;
      }
      if (r != R){
            val++;
      }
    }
    cout << val <<endl;
}
int32_t main() {
  int tt=1;
  cin >> tt;
  while (tt--) {
    solve();
  }
}