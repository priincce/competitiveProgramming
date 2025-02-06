#include <bits/stdc++.h>
using namespace std;

bool dfs(int node,int parent, vector<vector<int>>& adj, vector<int>& vis) {
    vis[node] = 1;
    for (auto neighbor : adj[node]) {
        if (!vis[neighbor]) {
            if (dfs(neighbor, node, adj, vis)) {
                return true; // Cycle found
            }
        } else if (neighbor != parent) {
            return true; // Back edge detected, cycle exists
        }
    }

    return false; // No cycle found
}

bool iscycle(int n, vector<vector<int>>& adj) {
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            if (dfs(i,-1, adj, vis)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int t ;
    cin >> t;
    while(t--)
    {
      int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << (iscycle(n, adj) ? "YES" : "NO") << endl;
    }
    return 0;
}
