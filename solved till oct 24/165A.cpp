#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; 
        vector<int> v;
        for (int i = 0,j; i < n; ++i) {
            cin >>j;
            v.push_back(j-1); 
        }
        int ans = 3;
        for (int i = 0; i < n; ++i) {
            if (v[v[i]] == i) {
                ans = 2;
                break; 
            }
        }
        cout << ans << endl; 
    }
    return 0;
}
