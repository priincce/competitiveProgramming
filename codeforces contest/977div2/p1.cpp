#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, k;
    cin >> x >> k;
    vector< int> v(x, 0);
    for(int i=0;i<x;i++)cin>>v[i];
    sort(v.begin(),v.end(),reverse<int>());
    int i=0,rem=0,ans=0;
    while(i<x and k>0){
      rem=v[i]%2;
      if(v[i]/2>=k)
      {
            ans+=k*2;
            k=0;
      }else{
            ans+=v[i];
            k-=(v[i]/2+rem);
      }
      i++;
    }
    if(rem==1 and i<x){
      ans--;
    }
      
   
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int t = 1;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
