#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main()
{
      int n, p, q, r;
      cin >> n>>p>>q>>r;
      vector<int>arr(n),pref(n,0), suf(n,0);
      for(int i=0;i<n;i++)cin >>arr[i];

      int ans = LLONG_MIN;
      pref[0]=p*arr[0];
      suf[n-1]=r*arr[n-1];

      for(int i=1; i<n;i++)
      {
            pref[i]=max(arr[i]*p, pref[i-1]);
      }
      for(int i = n-2;i>=0;i--)
      {
            suf[i]=max(r*arr[i], suf[i+1]);
      }
      for(int i=0;i<n;i++)
      {
            ans=max(ans, arr[i]*q+pref[i]+suf[i]);
      }
      cout<<ans<<endl;
      return 0;

}