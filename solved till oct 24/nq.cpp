bool isSafe(int row,int col,vector<vector<int>>&board,int n)
{
    int x=row,y=col;
    while(y>=0)
    {
        if(board[x][y]==1)
            return false;
        y--;
    }
    x=row,y=col;
    while(y>=0&&x>=0)
    {
        if(board[x][y]==1)
            return false;
        x--;
        y--;
    }
    x=row,y=col;
    while(y>=0&&x>=0)
    {
        if(board[x][y]==1)
        {
            return false;
        }
        x++;
        y--;
    }
    return true;
}
// void addAns(vector<vector<int>>&board,vector<vector<int>>&ans,int n)
// {  vector<int>temp;
//     for(int i=0;i<n;i++)
//     {
      
//         for(int z=0;z<n;z++)
//         {
//             temp.push_back(board[i][z]);
//         }
        
//     }
//     ans.push_back(temp);
// }
void solve(int col,vector<vector<int>>&ans,vector<vector<int>>&board,int n)
{
    if(col==n)
    {
        vector<int>temp;
    for(int i=0;i<n;i++)
    {
      
        for(int z=0;z<n;z++)
        {
            temp.push_back(board[i][z]);
        }
        
    }
    ans.push_back(temp);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(isSafe(row,col,board,n))
        {
            board[row][col]=1;
            solve(col+1,  ans, board, n);
            board[row][col]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>ans;
    vector<vector<int>>board(n,vector<int>(n,0));
    solve(0,ans,board,n);
    return  ans;
}