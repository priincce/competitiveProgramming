#include <iostream>
#include <vector>
using namespace std;

void solve() {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> freq(n + 1, 0);
        vector<int> b;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            b.push_back(a[i]);
            freq[a[i]]++;
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {

    solve();}
    return 0;
}

