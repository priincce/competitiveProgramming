#include<bits/stdc++.h>
using namespace std;
// most opyimised solution using rolling array DP
class Solution {
    public:
    bool isMatch(string s, string p) {
       int  n = s.size(), m = p.size();
       vector<bool>dp(m+1,false);
       bool prev = false;
       dp[0]=true;
       for(int j = 1; j<= m; j++)
       {
        if(p[j-1]=='*')
        {
            dp[j]= dp[j-1];
        }
       }
       for(int i = 1; i<= n;i++)
       {
        prev = dp[0];
        dp[0]=false;
        for( int j = 1; j<= m; j++)
        {
            bool temp = dp[j];
            if(p[j-1]==s[i-1] or p[j-1]=='?')
            {
                dp[j]=prev;
            }
            else if (p[j-1]=='*')
            {
                dp[j]= dp[j] || dp[j-1];
            }
            else{
                dp[j]=false;
            }
            prev = temp;
        }
        
       }
       return dp[m];
    }
};

int main()
{
	int tt = 1;
	cin >> tt;
	while(tt --)
	{
		string s, p;
		cin >> s >> p;
		Solution T;
	    T.isMatch(s,p) ? cout<<"TRUE" :cout << "FALSE";
        cout << endl;
	}
	return 0;
}