#include <bits/stdc++.h>
using namespace std;

void solve() {
    int D, X, Y;
    cin >> D >> X >> Y;
    
    if (Y >= X) {
        cout << 0 << endl;
        return;
    }

    int minSessions = -1;
    for (int n = 0; n <= 100; ++n) { // Use 100 as a safe upper limit
        int discountPercentage = n * D;
        if (discountPercentage > 100) {
            discountPercentage = 100;
        }

        double discountedPrice = X * (100.0 - discountPercentage) / 100.0;
        int r=Y-n;
        if (discountedPrice<=r) {
            minSessions = n;
            break;
        }
    }
    
    cout << minSessions << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    
    while (T--) {
        solve();
    }

    return 0;
}
