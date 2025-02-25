#include<bits/stdc++.h>
using namespace std;

void dfs(int source, int dest, vector<list<int>>&lst,vector<bool>&vis)
{
	vis[source]=true;
	for(auto node:source)
}
int main(){
	vector<vector<int>>edge={{0,1},{0,2},{3,5},{5,4},{4,3}};
	vector<list<int>>lst;
	for(const auto edge: egdes)
	{
		lst[u].push_back(v);
		lst[v].push_back(u);
	}
	int n=3, source = 0, dest= 2;
	vector<bool>vis(n+1,false);
	dfs(source,dest,lst,vis);
	if(vis[dest])cout<<"True"<<endl;
	else cout<<"False"<<endl;
	return 0;
}