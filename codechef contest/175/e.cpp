#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];

    int mex = [&]() { //brute force
        int cur_mex = 0;
        std::set<int> seen;
        for (int x : a) {
            seen.insert(x);
            while (seen.contains(cur_mex)) ++cur_mex;
        }
        return cur_mex;
    }();


    int shortest_prefix = [&]() {
        int cur_mex = 0;
        std::set<int> seen;
        for (int i = 0; i < n; ++i) {
            seen.insert(a[i]);
            while(seen.contains(cur_mex)) ++cur_mex;
            if (cur_mex == mex) return i;
        }
        return -1;
    }();

    int shortest_suffix = [&]() {
        int cur_mex = 0;
        std::set<int> seen;
        for (int i = n - 1; i >= 0; --i) {
            seen.insert(a[i]);
            while(seen.contains(cur_mex)) ++cur_mex;
            if (cur_mex == mex) return i;
        }
        return -1;
    }();
    
    auto has_said_mex = [&](int l, int r, int target_mex) {
        if (l > r) return false;
        int cur_mex = 0;
        std::set<int> seen;
        for (int i = l; i <= r; ++i) {
            seen.insert(a[i]);
            while(seen.contains(cur_mex)) ++cur_mex;
        }
        return cur_mex == target_mex;
    };
    
    
    if (shortest_prefix == -1 || shortest_suffix == -1 || !has_said_mex(shortest_prefix + 1, shortest_suffix - 1, mex)) {
        std::cout << "-1 -1\n";
        return;
    }


    std::cerr << shortest_prefix << " " << shortest_suffix << "\n";
    long long min_sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i <= shortest_prefix) min_sum += a[i];
        else if (i >= shortest_suffix) min_sum += a[i];
        else min_sum -= a[i];
    }


    std::cout << min_sum << " ";
    auto smallest_sum_with_mex = [&](int l, int r, int target_mex) {
        long long smalles_sum = 1e18, window_sum = 0, cur_mex = 0;
        std::unordered_map<int, int> freq;
        int tail = l;
        for (int i = l; i <= r; ++i) {
            freq[a[i]]++;
            window_sum += a[i];
            while (freq[cur_mex] > 0) ++cur_mex;
            while (cur_mex == target_mex) {
                smalles_sum = std::min(smalles_sum, window_sum);
                if (tail == i) break;
                if (a[tail] > cur_mex) {
                    window_sum -= a[tail];
                    freq[a[tail]]--;
                    tail++;
                } else if (freq[a[tail]] > 1) {
                    window_sum -= a[tail];
                    freq[a[tail]]--;
                    tail++;
                } else break;
            }
        }
        return smalles_sum;
    }(shortest_prefix + 1, shortest_suffix - 1, mex);
    std::cout << std::accumulate(a.begin(), a.end(), 0LL) - 2 * smallest_sum_with_mex << '\n';
}

int main() {
	int t;
	std::cin >> t;
	while (t--) solve();

}