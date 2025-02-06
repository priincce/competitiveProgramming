#include "bits/stdc++.h"
using namespace std;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;
using i128 = __int128;

void solve()
{
      int n;
      cin >> n;
      vector<int>left(n), right(n),a(n);
      for(int i=0;i<n;i++)
      {
            cin>> left[i]>>right[i];
      }

      vector adj(n, vector<int>(0));
      for (int i = 1; i < n; i++)
      {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
      }
      long long ans =0;
      function<void(int,int)>dfs = [&](int u,int parent)
      {
           int mx = left[u];
            for (int v : adj[u])
            {
                if (v == parent)
                    continue;
                dfs(v, u);
                mx = max(mx, a[v]);
            }
            a[u] = min(mx, right[u]);
            for (int v : adj[u])
            {
                if (v == parent)
                    continue;
                ans += max(0, a[v] - a[u]);
            }
      };
      dfs(0, -1);
      cout << ans+a[0]<<'\n';
}
int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
      int t;
      cin >> t;
      while(t--)
      {
            solve();
      }
      return 0;
}