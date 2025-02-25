#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long

int32_t main() {
    int T;
    cin >> T;
    while (T--) {
        int x, y;
        cin >> x >> y;
        int ans;

        if (x > y) {
            ans = x * x - x + 1;
            if (x & 1) ans -= (x - y); 
            else ans += (x - y);
        } else {
            ans = y * y - y + 1;
            if (y & 1) ans += (y - x); 
            else ans -= (y - x);
        }

        cout << ans << endl;
    }
    return 0;
}
