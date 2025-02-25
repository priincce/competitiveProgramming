#include <bits/stdc++.h>

using namespace std;

struct DSU {
    vector<int> par;
    vector<int> rankk;
    vector<long long> sum;
    vector<long long> dp;
    DSU(int n) {
        par.resize(n + 1);
        rankk.resize(n + 1);
        sum.resize(n + 1);
        dp.resize(n + 1);
        iota(par.begin(), par.end(), 0);
        fill(rankk.begin(), rankk.end(), 0);
    }
    int find(int u) {
        return u == par[u] ? u : par[u] = find(par[u]);
    }
    bool same(int u, int v) {
        return find(u) == find(v);
    }
    void merge(int u, int v, int w) {
        u = find(u);
        v = find(v);
        if (u == v) {
            return;
        }
        if (rankk[u] < rankk[v]) {
            swap(u, v);
        }
        if (rankk[u] == rankk[v]) {
            rankk[u]++;
        }
        long long val1 = max({dp[u], sum[u] + w, dp[v] + sum[u]});
        long long val2 = max({dp[v], sum[v] + w, dp[u] + sum[v]});
        dp[u] = min(val1, val2);
        par[v] = u;
        sum[u] += sum[v];
    }
};

void solve() {
    long long n;
    long long m;
    cin >> n;
    cin >> m;
    vector<long long> a(n + 1);
    vector<long long> b(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }
    vector<array<long long, 3>> edges;
    for (int i = 1; i <= m; ++i) {
        long long u;
        long long v;
        cin >> u;
        cin >> v;
        long long w = max(a[u], a[v]);
        edges.push_back({w, u, v});
    }
    sort(edges.begin(), edges.end());
    DSU dsu(n);
    for (int i = 1; i <= n; ++i) {
        dsu.dp[i] = dsu.sum[i] = b[i];
    }
    for (auto& [w, u, v] : edges) {
        if (!dsu.same(u, v)) {
            dsu.merge(u, v, w);
        }
    }
    cout << dsu.dp[dsu.find(1)] << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}