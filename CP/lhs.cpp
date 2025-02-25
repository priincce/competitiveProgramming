#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLHS(vector<int>& nums) {
    	sort(nums.begin(),nums.end());
        int i=0, j=1, ans=0;
        while(j<nums.size())
        {
            if(nums[j]-nums[i]==1)
            {
            	ans = max(ans, j-i+1);
            	j++;
            }
            else if(nums[j]-nums[i]>1)
            {
            	i++;
            	if(i==j){
            		j++;
            	}
            }
            else
            {
            	j++;
            }
        }
        // cout<<ans<<endl;
        return ans;

    }
};
int main()
{   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	int tt=1;
	std::cin>>tt;
	while(tt--)
	{
		int n;
	std::cin >>n;
	std::vector<int>arr(n,0);
	for(int i=0;i<n;i++)cin >>arr[i];

	Solution T;
    std::cout<<T.findLHS(arr)<<endl;
	}
	return 0;
}