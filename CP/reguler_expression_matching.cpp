#include<bits/stdc++.h>
#define endl  "\n"
using namespace std;
const int MOD = 1e9+7;
dp[10000][10000];
memset(dp, 0, sizeof(dp));
class Solution{
public:
	bool regulerExpression(string &s1, string &s2)
	{
          if
	}
};

void solve()
{
	string s1, s2;
	cin >> s1 >> s2;
	Solution T;
	T.regulerExpression(s1, s2)? cout << "TRUE" << endl : cout << "FALSE" << endl; 
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);


	int tt = 1;
	cin >> tt;
	while(tt-- )
	{
		solve();
	}
	return 0;
}