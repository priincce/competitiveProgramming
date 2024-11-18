#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void place(vector<vector<int>>&s,int row,int col)
{
      vector<pair<int,int>>directions={{1,2},{2,1},{1,-2},{-1,2},{-1,-2},{-2,1},{2,-1},{-2,-1}};
      for(auto dir:directions )
      {
           int newRow=row+dir.first;
           int newCol=col+dir.second;
           if(newRow<8 and newRow>0 and newCol<8 and newCol>0 )
             {
                  s[newRow][newCol]=1;
             }
      }
}
void solve() {
      long long int n,k,ans=0;
      cin>>n>>k;
      unordered_map<int,int>mrow,mcol;

    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
