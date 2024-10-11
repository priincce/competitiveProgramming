#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int T, n;
string s;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        cin >> n >> s;
        int cnt = 0;
        for(char c : s) {if(c == 'U') ++cnt;}
        if(cnt & 1){
             cout << "YES" << endl;
        }
        else{ 
            cout << "NO" << endl;
        }
    }
    return 0;
}