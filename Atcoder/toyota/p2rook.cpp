#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    vector<string> board(8);
    unordered_map<int, int> rowCount, colCount;

    for (int i = 0; i < 8; i++) {
        cin >> board[i];
        for (int j = 0; j < 8; j++) {
            if (board[i][j] == '#') {
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[i][j] == '.') {
                if (rowCount[i] == 0 && colCount[j] == 0) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
