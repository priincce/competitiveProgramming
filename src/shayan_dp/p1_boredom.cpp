#include<bits/stdc++.h>
using namespace std;
using ll= long long int;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626
#define MOD 1e9+7

#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

#define limi 150000
#define fo_limi 100001
ll ans[limi]={0}, cnt[limi]={0},arr[limi]={0};



void solve()
{
      // write your code here
      int N;
      cin>>N;
      for(int i=0;i<N;i++)
      {
            cin>>arr[i];
            cnt[arr[i]]++;
      }
      ans[0]=0;
      ans[1]=cnt[1];
      for(int i=2;i<100001;i++)
      {
            ans[i]=max(ans[i-1],cnt[i]*i+ans[i-2]);
      }
      cout<<ans[100000]<<endl;
      
}

int main()
{

      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int t=1;
      //uncomment if multiple test cases
      // cin >> t; 
      while(t--)
      {
            solve();
      }
      return 0;
}