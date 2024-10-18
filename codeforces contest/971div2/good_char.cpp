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
 int n;
 cin>>n;
 int i=0,j=0;
 if(n%2){
      cout<<"NO"<<endl;
return;}
 cout<<"YES"<<endl;
 fo(i,n/2){fo(j,2){cout<<"AB"[i&1];}}
 cout<<endl;
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