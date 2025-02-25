#include <bits/stdc++.h>
using namespace std;
void solve()
{
     int n, ans = 0;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        int curr = a[i], left = 0, right = 0;
        if(i > 0){
            left = a[i-1];
            for(int j = i-2; j >= 0; j--){
                left = min(max(0,left-a[j]), max(0,a[j]-left));
            }
            curr = max(max(0,curr-left),max(0,left-curr));
        }
        if(i < n-1){
            right = a[i+1];
            for(int j = i+2; j < n; j++){
                right = min(max(0,right-a[j]),max(0,a[j]-right));
            }
            curr = max(max(0,curr-right),max(0,right-curr));
        }
        ans = max(ans,curr);
    }
    cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}