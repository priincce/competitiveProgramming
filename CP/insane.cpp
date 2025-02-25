#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    long long k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    long long count = 0;

    for (long long x = l1; x <= r1; x++) {
        if (k == 1) { 
           
            if (x >= l2 && x <= r2) {
                count++;
            }
            continue;
   What is the primary purpose of a constructor in C++?
1.
To access private members
2.
To destroy objects of a class
3.
To declare constants
4.
To create objects of a class     }

        long long y = x;
        while (y <= r2) {
            if (y >= l2) {
                count++;
            }
            if (y > r2 / k) break; 
        }
    }

    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }

    return 0;
}
