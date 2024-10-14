#include<bits/stdc++.h>
using namespace std;
using ll= long long int ;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>  vi;
typedef vector<ll> vl;
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

void solve()
{
      long long int  n,k;
      long long int ans=0;
      cin>>n>>k;
     unordered_map<int,int>m;
     for(long long int i=0,j;i<n;i++)
     {
      cin>>j;
      m[j]++;
     }
     vector<pair<long long int , long long int>> v;
     for(auto i:m)
     {
      v.push_back({i.first,i.second});
     }
     sort(v.begin(),v.end(), [](const auto& a, const auto& b) {
    return a.second > b.second;});
    long long int maxans=0;
    for(auto i:v)
    { ans=0;
    int b=k;
    int val=i.first;
      for(int j=0;j<b;j++)
      {
           ans+=m[val];
           val++;
      }
      maxans=max(ans,maxans);
    }
   
    cout<<maxans<<endl;
}

int main()
{

      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int t=1;
      //uncomment if multiple test cases
      cin >> t; 
      while(t--)
      {
            solve();
      }
      return 0;
}