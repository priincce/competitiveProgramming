
// top down approach

#include<bits/stdc++.h>
using namespace std;
#define int long long int
string a, b;
int edit_distance(string a, string b, int i=0, int j=0)
{
    if(i==a.size() and j==b.size())return 0;
    if(i==a.size())return b.size()-j;
    if(j==b.size())return a.size()-i;
    int ans;
    if(a[i] != b[j])
    {
           ans = 1 + min(edit_distance(a, b, i+1, j), min(edit_distance(a, b, i, j+1), edit_distance(a, b, i+1, j+1)));
    }
    else{
       ans = edit_distance(a, b, i+1, j+1);
    }
    return ans;
}

int32_t main()
{
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      int tt = 1;
      cin >> tt;
      while(tt--)
      {
            cin >> a >> b;
            cout << edit_distance(a, b) << endl;
      }
      return 0;
}