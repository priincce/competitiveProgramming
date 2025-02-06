#include <bits/stdc++.h>
using namespace std;

bool bfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
    queue<pair<int, int>> q;
    vis[node] = 1;
    q.push({node, -1});

    while (!q.empty()) {
        int curr = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (auto neighbor : adj[curr]) {
            if (!vis[neighbor]) {
                vis[neighbor] = 1;
                q.push({neighbor, curr});
            } else if (neighbor != parent) {
                return true;
            }
        }
    }
    return false;
}

bool iscycle(int n, vector<vector<int>>& adj) {
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            if (bfs(i, adj, vis)) {
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
    }

    cout << (iscycle(n, adj) ? "YES" : "NO") << endl;
    }
    return 0;
}
