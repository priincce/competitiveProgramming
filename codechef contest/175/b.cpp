#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string A;
    cin >> n >> A;
    string S = string(n,'z');
    
    if (S > A ) {
        cout << S << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
