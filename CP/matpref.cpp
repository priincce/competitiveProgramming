#include<bits/stdc++.h>
using namespace std;
void giveSum(vector<vector<int>>&rc, vector<vector<int>>&sum)
{
		for(auto i: sum)
	{
		for(auto j: i)
		{
			cout<< j<<" ";
		}
		cout<<"\n";
	}
	for(auto i:rc)
	{
		int r1=i[0], r2=i[2], c1=i[1], c2=i[3];
		int val=sum[r2+1][c2+1]-sum[r1][c2+1]-sum[r2+1][c1]+sum[r1][c1];
		cout<<val<<" ";
	}

}
int main()
{
	freopen("output.txt","w",stdout);
	vector<vector<int>>mat={{3,1,1,4,2},{5,6,3,2,1},{1,2,0,1,5},{4,1,0,1,7},{1,0,3,0,5}};
	int row = mat.size();
	int col = mat[0].size();

	vector<vector<int>>sum;
	sum.resize(row+1, vector<int>(col+1, 0));
	for(int i=1; i<=row; i++)
	{
		for(int j=1; j<=col; j++)
		{
			sum[i][j]=mat[i-1][j-1]+sum[i][j-1]+sum[i-1][j]-sum[i-1][j-1];
			// cout<< sum[i][j]<<" ";
		}
		// cout<<endl;
	}
	vector<vector<int>>rc={{2, 1, 4, 3},{1, 1, 2, 2},{1, 2, 2, 4}};
	giveSum(rc, sum);
	return 0;
}