#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main() {
    int n;
    cin>>n;
    int ans=0,i=1;
    while((n/pow(5,i)) >0)
    {
      ans+=(n/pow(5,i));
      i++;
    }
    cout<<ans<<endl;
    return 0;
}
