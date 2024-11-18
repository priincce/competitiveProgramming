#include<bits/stdc++.h>
using namespace std;

void solve() {
     string s,x;
     cin>>s;
     x="ABC";
     sort(s.begin(),s.end());
     (s==x)?cout<<"Yes"<<endl:cout<<"No"<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
//     cin>>t;
    while (t--) {
        solve();
    }

    return 0;
}
