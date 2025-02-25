#include <iostream>
#include<cstdint>
#include <string>
#include<vector>
using namespace std;
void solve()
{
      int n;
        cin >> n;
        
        string s;
        cin >> s;

        int count = 0;
        vector<string>xyz ={"mapie", "pie", "map"};
        for (string s1 : xyz) {
            size_t pos = 0;
            while ((pos = s.find(s1, pos)) != string::npos) {
                s[pos + s1.length() / 2] = '?';
                count++;
                pos += s1.length();
            }
        }

        cout << count << endl;
}
int32_t main() {
    int tt=1;
    cin >> tt;
    
    while(tt--)
    {
      solve();
    }
    return 0;
}