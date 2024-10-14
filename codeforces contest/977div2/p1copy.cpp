#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,k,sum=0;
  cin>>n>>k;
  vector<int>v(n,0);
  for(int i=0;i<n;i++){cin>>v[i]; sum+=v[i];}
  int s1=0,s2=0,cnt=0;
  for (int i = 0; i < n; i++)
  {
      if(v[i]%2==0)
      {
            s1+=v[i];
            cnt+=v[i]/2;
      }
      else{
            s1+=v[i]-1;
            s2+=1;
            cnt+=(v[i]-1)/2;
      }
  }
  int lft;
  if(s2%2==0)
  {
      cnt+=s2/2;
      lft=k-cnt;
      s1+=2*lft;
  }
  else{
      cnt+=(s2-1)/2;
      cnt++;
      s1++;
      lft=k-cnt;
      s1+=2*lft;
  }
  cout<<min(sum,s1)<<endl;
  
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
