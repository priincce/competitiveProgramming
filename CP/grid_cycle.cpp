#include<bits/stdc++.h>
using namespace std;
 bool isSafe(int i, int j, int rows, int cols)
    {
        if(i>=0 and i<rows and j>=0 and j<cols)return true;
        return false;
    }
    bool dfs(int i,int j,int parentX,int parentY, vector<vector<char>>& grid, vector<vector<bool>>& vis,int rows, int cols,vector<vector<int>>& directions)
    {
        vis[i][j]=true;
        for(auto dir:directions)
        {
            int newx=dir[0]+i,newy=dir[1]+j;
            if(isSafe(newx,newy,rows,cols)  and grid[i][j]==grid[newx][newy])
            {
                if (!vis[newx][newy]) {
                  if (dfs(newx, newy, i, j, grid, vis, rows, cols, directions)) 
                  {
                    return true;
                  }
                } 
                else if (newx != parentX || newy != parentY) 
                {
                    return true;
                }
            }
           
        }
        vis[i][j]=false;
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int rows=grid.size(), cols= grid[0].size();
        vector<vector<bool>>vis(rows,vector<bool>(cols,false));
        vector<vector<int>>directions={{1,0},{-1,0},{0,1},{0,-1}};
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++)
            {
                if(!vis[i][j])
                {
                    if(dfs(i,j,-1,-1,grid,vis,rows,cols,directions);)return true;
                }
            }
        }
        return false;
    }

    int main()
    {
      vector<vector<char>>grid={{"f","a","a","c","b"},{"e","a","a","e","c"},{"c","f","b","b","b"},{"c","e","a","b","e"},{"f","e","f","b","f"}};
      cout<<containsCycle(grid)<<endl;
      return 0;
    }