#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    multiset<int> barrels;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        barrels.insert(a);
    }

    // Function to check if the poisonous barrel can be identified
    auto canIdentify = [&]() {
        if (barrels.size() == 1) return true; // Only one barrel, it must be poisonous
        if (*barrels.begin() != *barrels.rbegin()) return true; // At least two unique weights
        return false; // All barrels have the same weight
    };

    // Output the initial answer
    cout << (canIdentify() ? "Yes" : "No") << "\n";

    // Process queries
    while (q--) {
        char op;
        int x;
        cin >> op >> x;

        if (op == '+') {
            barrels.insert(x);
        } else {
            barrels.erase(barrels.find(x));
        }

        // Output the answer after each query
        cout << (canIdentify() ? "Yes" : "No") << "\n";
    }

    return 0;
}