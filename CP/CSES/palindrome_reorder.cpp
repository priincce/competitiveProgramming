#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        int max_free_time = 0;

        for (int i = 0; i <= k; ++i) { // Iterate through all possible shifts for the first meeting
            for (int j = 0; j <= k - i; ++j) { // Iterate through all possible shifts for the second meeting (remaining k)
                vector<pair<int, int>> m;
                for (int l = 0; l < n; ++l) {
                    m.push_back({startTime[l], endTime[l]});
                }

                if (n > 0) {
                    m[0].first -= i;
                    m[0].second -= i;
                }
                if (n > 1) {
                    m[1].first -= j;
                    m[1].second -= j;
                }

                sort(m.begin(), m.end()); // Important: Sort after shifting!

                int p = 0;
                int current_free_time = 0;
                for (auto [s, e] : m) {
                    current_free_time = max(current_free_time, s - p);
                    p = e;
                }
                current_free_time = max(current_free_time, eventTime - p);
                max_free_time = max(max_free_time, current_free_time);
            }
        }
        return max_free_time;
    }
};