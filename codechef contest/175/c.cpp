#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0,j; i < n; i++) {
        cin >> j;
        if (s.count(j)) { 
            s.erase(j); 
            s.insert(0); 
        } 
        else {
            s.insert(j);
        }
    }
    cout << s.size() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
