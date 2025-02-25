#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
	string s;
	bool is_palindrome(int i, int j)
	{
         while(i<=j){
         	if(s[i]!=s[j])return false;
         	i++;
         	j--;
         }
         return true;
	}
	vector<vector<string>>dp(int i)
	{

		vector<vector<string>>ans;
		if(i==s.size())return vector<vector<string>>();
       for(int j=i;j<s.size();j++)
       {
       	if(is_palindrome(i,j))
       	{
             vector<vector<string>>res=dp(j+1);
             string substring = s.substr(i,j-i+1);
             for(auto &x:res)
             {
             	x.insert(x.begin(),substring);
             }
             if(res.empty())
             {
             	res.push_back({substring});
             }
             for(auto x:res)
             {
             	ans.push_back(x);
             }
       	}
       }
       return ans;
	}
    vector<vector<string>> partition(string s) {
        this->s=s;
        return dp(0);
    }
};

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string s;
	cin >>s;
    Solution T;
    vector<vector<string>>ans= T.partition(s);
    for(auto i:ans)
    {
    	for(auto j:i)cout<<j<<" ";
    }
return 0;
}