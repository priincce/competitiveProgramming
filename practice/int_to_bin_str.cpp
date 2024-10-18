#include<bits/stdc++.h>
using namespace std;
string Bin_str(int num)
{
      string binary="";
    for (int i = 31; i >= 0; --i) {
        binary += (num & (1 << i)) ? "1" : "0";
    }
    return binary;
}
 
string Bin_fast(int num)
{
      bitset<32> bin(num);
      string binary = bin.to_string();
      return binary;
}


void solve()
{
      int num=0;
      cin >> num;
      string ans= Bin_fast(num) ;
      cout <<ans << endl;
}

int main()
{

      ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int t=1;
      //uncomment if multiple test cases
      // cin >> t; 
      while(t--)
      {
            solve();
      }
      return 0;
}