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
// #define print()   for(auto x:a)cout<<x<<" "; cout<<endl;
// #define print1()  for(auto x:a)cout<<x.F<<" "<<x.S<<endl;
// #define print(a,x,y)    for(int i=x;i<y;i++)cout<<a[i]<<" "; cout<<endl;

const int mod = 1e9 + 7;

int  lcs(string&s1, string&s2)
{
   int n = s1.size(), m = s2.size();
   int dp[n+1][m+1];
   memset(dp, 0, sizeof(dp));
   for(int i=1;i<=n;i++)
   {
   	for(int j = 1; j<= m ;j++)
   	{
   		if(s1[i-1]==s2[j-1])
   		{
   			dp[i][j]=1+dp[i-1][j-1];
   		}
   		else{
   			dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
   		}
   	}
   }
   return dp[n][m];
}
void solve()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout<< lcs(s1,s2) << endl;
}
int32_t main()
{ 
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	clock_t z = clock();
	int tt = 1;

	cin >> tt;
	while(tt--)
	{
		solve();
	}
	cerr<<"RUN TIME : "<<fixed<<setprecision(12)<<((double)(clock()-z)/CLOCKS_PER_SEC)<<" Sec  ";
	return 0;
}

