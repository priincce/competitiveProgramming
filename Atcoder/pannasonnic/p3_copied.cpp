#include<iostream>
#include<cassert>
using namespace std;
int N;
string A[3000];
char B[3000][3000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>N;
	for(int i=0;i<N;i++)cin>>A[i];
      
	for(int d=0;d<N/2;d++)
	{
		for(int t=0;t<(d+1)%4;t++)
		{
			for(int x=d;x<N-d;x++)
			{
				B[x][d]=A[x][d];
				B[x][N-d-1]=A[x][N-d-1];
				B[d][x]=A[d][x];
				B[N-d-1][x]=A[N-d-1][x];
			}
			for(int x=d;x<N-d;x++)
			{
				A[d][N-x-1]=B[x][d];
				A[N-d-1][N-x-1]=B[x][N-d-1];
				A[x][N-d-1]=B[d][x];
				A[x][d]=B[N-d-1][x];
			}
		}
	}
	for(int i=0;i<N;i++)cout<<A[i]<<"\n";
}
