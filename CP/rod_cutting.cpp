#include<bits/stdc++.h>
using namespace std;
const int N =1e5+1;
int memo[N];
// space O(n) time O(n^2)
int rod_cutting(int n, vector<int>&prices)
{
	// base case
    if(n==0) return 0;
    if(memo[n]!=-1)return memo[n];
    int ans = 0;
	for(int i=1; i<=n; i++)//extra O(n) memo
	{
		ans=max(ans,prices[i]+rod_cutting(n-i,prices));
	}
	return memo[n]=ans;
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	cin >>n;
	vector<int>prices(n+1);
	memo[0]=-1;
	for(int i=1;i<n+1;i++){cin>>prices[i];memo[i]=-1;}
	int ans = rod_cutting(n, prices);
    cout<<ans<<"\n";
    return 0;
}