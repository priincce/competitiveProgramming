/*
						WOODS ARE LOVELY DARK AND DEEP
						BUT HAVE MY PROMISES TO KEEP 
						AND MILES TO GO BEFORE I SLEEP 
						AND MILES TO GO BEFORE I SLEEP
*/
/*********************************   DO YOU REALY DESERVE IT   *************************************/

#include<bits/stdc++.h>
using namespace std;


#define int       long long int
#define F         first
#define S         second
#define pb        push_back
#define si        set<int>
#define vi        vector<int>
#define pii       pair<int, int>
#define vpi       vector<pii>
#define umii      unordered_map<int,int>
#define mii       map<int,int>
#define endl      "\n"
#define sz(x)     ((int)x.size())
#define all(p)    p.begin(),p.end()
#define double    long double
#define qu_max    priority_queue<int>
#define qu_min    priority_queue<int,vi,greater<int>>
#define bug(...)  __f(#__VA_ARGS__,__VA_ARGS__)
#define print()   for(auto x:a)cout<<x<<" "; cout<<endl;
#define print1()  for(auto x:a)cout<<x.F<<" "<<x.S<<endl;
#define print(a,x,y)    for(int i=x;i<y;i++)cout<<a[i]<<" "; cout<<endl;


const int MOD = 1000000007;


void solve()
{
      int n;
      cin>>n;
      vector<int>v(n);
      for(int i=0;i<n;i++)cin>>v[i];
      for(auto x:v)cout<<x<<" ";
      cout<<endl;
}

int32_t main()
{ 
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	// clock_t z = clock();
	int tt = 1;

	// cin >> tt;
	// const int mod = 1e9 + 7;
	while(tt--) solve();
	// cerr<<"RUN TIME : "<<((double)(clock()-z)/CLOCKS_PER_SEC)<<" Sec  ";
	return 0;
}

