#include <bits/stdc++.h>
using namespace std;
void solve()
{
        int n;
        cin>>n;
        vector<long long> v(n);
        for(int i = 0; i < n; i++) cin>>arr[i];
        long long sum =0,ans = 0;
        for(int i = 0; i < n; i++){
            sum += v[i];
            ans += abs(sum);
        }
        cout<<ans<<endl;
}
int main() {
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
    }
}