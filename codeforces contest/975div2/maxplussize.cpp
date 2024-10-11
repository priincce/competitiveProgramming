#include <bits/stdc++.h>
using namespace std;

void solve1(vector<int> &ans, vector<int> &arr, int index, int &val) {
    if (index >= arr.size()) return;
    
    ans.push_back(arr[index]);
    
    for (int i = index + 2; i < arr.size(); i++) {
        solve1(ans, arr, i, val);
    }
    
    val = max(val, (int)ans.size() + *max_element(ans.begin(), ans.end()));
    
    ans.pop_back();
}

void solve() {
    int n, val = INT_MIN;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> ans;
    solve1(ans, v, 0, val);
    cout << val << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
