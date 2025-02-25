#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

const int MOD = 998244353;

using namespace std;

class SegmentTree {
public:
    SegmentTree(int n) {
        this->n = n;
        min_tree.assign(4 * n, INT_MAX);
        max_tree.assign(4 * n, INT_MIN);
    }

    void build(const vector<int>& arr, int node, int start, int end) {
        if (start == end) {
            min_tree[node] = arr[start];
            max_tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            int left_child = 2 * node + 1;
            int right_child = 2 * node + 2;
            build(arr, left_child, start, mid);
            build(arr, right_child, mid + 1, end);
            min_tree[node] = min(min_tree[left_child], min_tree[right_child]);
            max_tree[node] = max(max_tree[left_child], max_tree[right_child]);
        }
    }

    void update(int idx, int value, int node, int start, int end) {
        if (start == end) {
            min_tree[node] = value;
            max_tree[node] = value;
        } else {
            int mid = (start + end) / 2;
            int left_child = 2 * node + 1;
            int right_child = 2 * node + 2;
            if (start <= idx && idx <= mid) {
                update(idx, value, left_child, start, mid);
            } else {
                update(idx, value, right_child, mid + 1, end);
            }
            min_tree[node] = min(min_tree[left_child], min_tree[right_child]);
            max_tree[node] = max(max_tree[left_child], max_tree[right_child]);
        }
    }

    int query_min(int L, int R, int node, int start, int end) {
        if (R < start || end < L) {
            return INT_MAX;
        }
        if (L <= start && end <= R) {
            return min_tree[node];
        }
        int mid = (start + end) / 2;
        int left_child = 2 * node + 1;
        int right_child = 2 * node + 2;
        int left_min = query_min(L, R, left_child, start, mid);
        int right_min = query_min(L, R, right_child, mid + 1, end);
        return min(left_min, right_min);
    }

    int query_max(int L, int R, int node, int start, int end) {
        if (R < start || end < L) {
            return INT_MIN;
        }
        if (L <= start && end <= R) {
            return max_tree[node];
        }
        int mid = (start + end) / 2;
        int left_child = 2 * node + 1;
        int right_child = 2 * node + 2;
        int left_max = query_max(L, R, left_child, start, mid);
        int right_max = query_max(L, R, right_child, mid + 1, end);
        return max(left_max, right_max);
    }

private:
    int n;
    vector<int> min_tree;
    vector<int> max_tree;
};

int compute_f(SegmentTree& seg_tree, int N) {
    long long f_value = 0;
    for (int i = 0; i < N; ++i) {
        int min_val = seg_tree.query_min(i, N - 1, 0, 0, N - 1);
        int max_val = seg_tree.query_max(i, N - 1, 0, 0, N - 1);
        f_value += (long long) min_val * max_val;
        f_value %= MOD;
    }
    return f_value;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, Q;
        cin >> N >> Q;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        SegmentTree seg_tree(N);
        seg_tree.build(A, 0, 0, N - 1);

        // Initial computation of f(A)
        cout << compute_f(seg_tree, N) << endl;

        while (Q--) {
            int x, v;
            cin >> x >> v;
            x--; // Convert to 0-based index
            seg_tree.update(x, v, 0, 0, N - 1);
            cout << compute_f(seg_tree, N) << endl;
        }
    }

    return 0;
}
