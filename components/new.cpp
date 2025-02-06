#include <bits/stdc++.h>
using namespace std;

vector<int> lt;

void precompute_logs(int max_n) {
    lt.resize(max_n + 1);
    lt[1] = 0;
    for (int i = 2; i <= max_n; ++i) {
        lt[i] = lt[i / 2] + 1;
    }
}

struct SparseTable {
    vector<vector<int>> st;
    int n;
    vector<int> a;

    void build(const vector<int>& arr) {
        a = arr;
        n = arr.size();
        int k = lt[n] + 1;
        st.resize(k, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            st[0][i] = a[i];
        }
        for (int j = 1; j < k; ++j) {
            for (int i = 0; i + (1 << j) <= n; ++i) {
                st[j][i] = max(st[j-1][i], st[j-1][i + (1 << (j-1))]);
            }
        }
    }

    int query_max(int l, int r) {
        if (l > r) return 0;
        int len = r - l + 1;
        int j = lt[len];
        return max(st[j][l], st[j][r - (1 << j) + 1]);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute_logs(3e5 + 10);

    int T;
    cin >> T;
    while (T--) {
        int N, P;
        cin >> N >> P;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        vector<int> left_volcano(N, -1);
        vector<int> right_volcano(N, N);
        int prev = -1;
        for (int i = 0; i < N; ++i) {
            if (A[i] == 0) {
                prev = i;
            }
            left_volcano[i] = prev;
        }
        prev = N;
        for (int i = N-1; i >= 0; --i) {
            if (A[i] == 0) {
                prev = i;
            }
            right_volcano[i] = prev;
        }

        SparseTable st;
        st.build(A);

        vector<int> ans(N);
        for (int i = 0; i < N; ++i) {
            if (A[i] == 0) {
                ans[i] = 0;
                continue;
            }

            int minimal_max = INT_MAX;
            if (left_volcano[i] != -1) {
                int l = left_volcano[i] + 1;
                int r = i;
                int left_max = st.query_max(l, r);
                minimal_max = min(minimal_max, left_max);
            }
            if (right_volcano[i] != N) {
                int l = i;
                int r = right_volcano[i] - 1;
                int right_max = st.query_max(l, r);
                minimal_max = min(minimal_max, right_max);
            }

            int required_max = max(A[i], minimal_max);
            int t = (required_max + P - 1) / P;
            ans[i] = t;
        }

        for (int i = 0; i < N; ++i) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
