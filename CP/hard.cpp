#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    // calculate rem resources
    int trem = m * 2; 
    trem -= min(a, m);
    trem -= min(b, m); 
    trem -= min(c, trem);

    cout << m * 2 - trem << endl; 
}
int32_t main()
{
      int tt = 1;
      cin >> tt;
      while(tt--)
      {
            solve();
      }
      return 0;
}